class Solution {
public:
    bool isPalindrome(string s) {
        vector <char> s2;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s2.push_back(s[i] + 32);
            }
            else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                s2.push_back(s[i]);
            }
        }
        int l = 0;
        int r = s2.size() - 1;
        while(l < r)
        {
            if(s2[l] != s2[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
