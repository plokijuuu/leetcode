class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>>v;
        map<int,int>mapa;
        vector<int>answer;
        for(auto i: nums)
        {
            mapa[i]++;
        }
        for(auto i: mapa)
        {
            v.push_back(make_pair(i.first,i.second));
        }
        auto comp = [](pair<int, int> a, pair<int,int> b) 
        {
      	    return a.second > b.second;
        };
        sort(v.begin(),v.end(),comp);
        for(auto i: v)
        {
            if(k == 0) break;
            answer.push_back(i.first);
            k--;
        }
        return answer;

    }
};
