class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length())
        {
            int litery[26] = {0};
            for(int i = 0; i < s.length(); i++)
            {
                litery[s[i] - 'a']++;
                litery[t[i] - 'a']--;
            }
            for(int i = 0; i < 26; i++)
            {
                if(litery[i] != 0) return false;
            }
            return true;
        }
        else return false;
    }
};
