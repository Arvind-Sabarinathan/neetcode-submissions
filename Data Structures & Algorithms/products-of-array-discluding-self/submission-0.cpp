class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> res(len);

        int pre = 1;

        for(int i = 0; i < len; i++){
            res[i] = pre;
            pre *= nums[i];
        }

        int post = 1;

        for(int i = len - 1; i >= 0; i--){
            res[i] *= post;
            post *= nums[i];
        }

        return res;
    }
};
