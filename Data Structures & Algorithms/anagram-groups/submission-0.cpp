class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int, 26>, vector<string>> mp;

        for (auto s: strs){
            array<int, 26> freq = {};

            for(char c : s){
                freq[c - 'a']++;
            }

            mp[freq].push_back(s);
        }

        vector<vector<string>> res;

        for(auto pair : mp){
            res.push_back(pair.second);
        }

        return res;
    }
};
