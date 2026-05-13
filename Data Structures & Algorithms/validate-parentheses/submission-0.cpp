class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        unordered_map<char, char> mp;
        mp.insert({')', '('});
        mp.insert({'}', '{'});
        mp.insert({']', '['});

        for(char c : s){
            if(c == '(' or c == '{' or c == '['){
                st.push(c);
            }
            else{
                if(st.empty() || st.top() != mp[c]) {
                    return false;
                }
                
                st.pop();
            }
        }

        return st.empty();
    }
};
