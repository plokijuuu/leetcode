class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int size = nums.size();
       sort(nums.begin(), nums.end());
       int ans = 1;
       int temp = 1;
       for(int i = 1; i < size; i++)
       {
            if((nums[i] - 1) == nums[i - 1]) 
            {
                temp++;
            }
            else if(nums[i] == nums[i - 1])
            {
                continue;
            }
            else if(ans < temp)
            {
                ans = temp;
                temp = 1;
            }
            else temp = 1;
       }
       if(temp > 1 && ans < temp) ans = temp;
       
       return ans;

    }
};
