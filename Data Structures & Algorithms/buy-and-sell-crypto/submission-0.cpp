class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;

        int l = 0;
        int r = 1;

        while(r < prices.size()){
            if(prices[r] < prices[l]){
                l = r;
            } else{
                res = max(prices[r] - prices[l], res);
            }
            r += 1;
        }

        return res;
    }
};
