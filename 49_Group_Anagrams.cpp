class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> wynik;
        map<string, vector<string>>mapa;
        for(auto i: strs)
        {
            string temp = i;
            sort(temp.begin(),temp.end());
            mapa[temp].push_back(i);
        }
        for(auto i: mapa)
        {
            wynik.push_back(i.second);
        }
        return wynik;
    }
};
