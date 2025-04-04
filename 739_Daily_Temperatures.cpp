class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <int> st;
        vector<int>ans(temperatures.size());
        st.push(0);
        for(int i = 1; i < temperatures.size(); i++)
        {
            while(!st.empty() && temperatures[st.top()] < temperatures[i])
            {
                ans[st.top()] = (i - st.top());
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
