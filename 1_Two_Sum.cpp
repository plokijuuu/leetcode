class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> unmap;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(unmap.find(target - nums[i]) != unmap.end())
            {
                ans.push_back(i);
                ans.push_back(unmap[target - nums[i]]);
                return ans;
            }
            else
            {
                unmap[nums[i]] = i;
            }
        }
        return ans;
    }
};
