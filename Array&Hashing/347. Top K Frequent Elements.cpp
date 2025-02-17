class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> hashmap;

        for(auto num : nums){
            hashmap[num]++;
        }

        vector<pair<int, int>> elems(hashmap.begin(), hashmap.end());
        sort(elems.begin(), elems.end(), [](pair<int, int> a, pair<int,int> b){
            return a.second > b.second;
        });

        vector<int> result;
        for(int i = 0 ; i < k ; i++){
            result.push_back(elems[i].first);
        }

        return result;
    }
};
