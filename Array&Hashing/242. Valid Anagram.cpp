class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.length();
        int l = t.length();
        if(n != l ) return false;
        unordered_map<char, int> hashmap;

        for(int i = 0 ; i < n ; i++){
            hashmap[s[i]]++;
            hashmap[t[i]]--;
        }

        for(auto i : hashmap ){
            if(i.second != 0){
                return false;
            }
        }
        return true;
    }
};
