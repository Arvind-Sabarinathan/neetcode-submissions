class Solution {
public:
    bool isPalindrome(string s) {
        string pre = "";

        for(char c : s){
            if(isalnum(c)){
                pre += tolower(c);
            }
        }

        int l = 0; 
        int r = pre.length() - 1;
        while(l < r){
            if(pre[l] != pre[r]){
                return false;
            }
            l += 1;
            r -= 1;
        }

        return true;
    }
};
