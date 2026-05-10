class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> mp;

        for(int i = 0; i < s.length(); i++){
            mp[s[i]] += 1;
        }

        for(int j = 0; j < t.length(); j++){
            mp[t[j]] -= 1;
        }

        for(auto pair : mp){
            if(pair.second != 0){
                return false;
            }
        }

        return true;
    }
};
