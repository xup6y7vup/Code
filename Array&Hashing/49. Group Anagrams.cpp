class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> hashmap;

        for( auto s : strs ){
            string s_copy = s;
            sort(s_copy.begin(), s_copy.end());
            hashmap[s_copy].push_back(s);
        }

        vector<vector<string>> result;
        for(auto item : hashmap){
            result.push_back(item.second);
        }
        return result;
    }
};
