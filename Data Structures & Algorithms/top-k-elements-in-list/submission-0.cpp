class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int num : nums){
            mp[num]++;
        }

        priority_queue<pair<int, int>> heap;

        for(auto pair: mp){
            heap.push({pair.second, pair.first});
        }

        vector<int> res;

        for(int i = 0; i < k; i++){
            res.push_back(heap.top().second);
            heap.pop();
        }

        return res;
    }
};
