class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>slo;
        stack<char>st;
        slo['}'] = '{';
        slo[')'] = '(';
        slo[']'] = '[';
        
        for(auto i: s)
        {
            if(slo.find(i) == slo.end()) st.push(i);
            else if(!st.empty() && slo[i] == st.top())
            {
                st.pop();
            }
            else return false;
        }
        if(!st.empty()) return false;
        return true;

    }
};
