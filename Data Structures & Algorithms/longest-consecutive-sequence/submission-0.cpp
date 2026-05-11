class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;

        unordered_set<int> st;

        for(int num : nums){
            st.insert(num);
        }

        for(int num : st){
            if(!(st.contains(num - 1))){
                int len = 1;
                int temp = num + 1;
                while(st.contains(temp)){
                    len += 1;
                    temp += 1;
                }
                res = max(len , res);
            }
        }

        return res;
    }
};
