class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";

        for(string str : strs){
            s.append(to_string(str.length()) + "#" + str);
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;

        int i = 0;
        
        while(i < s.length()){
            int j = i;

            while(s[j] != '#'){
                j += 1;
            }

            int len = stoi(s.substr(i, j - i));

            j += 1;

            string str = s.substr(j, len);

            res.push_back(str);

            i = j + len;
        }

        return res;
    }
};
