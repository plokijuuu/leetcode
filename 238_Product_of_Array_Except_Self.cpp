class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        ans.push_back(1);
        for(int i = 1; i < n; i++)
        {
            ans.push_back(ans[i - 1] * nums[i - 1]);
        }
        int temp = 1;
        for(int i = n - 2; i >= 0; i--)
        {
            temp *= nums[i + 1];
            ans[i] *= temp;
        }
        return ans;
    }
};
