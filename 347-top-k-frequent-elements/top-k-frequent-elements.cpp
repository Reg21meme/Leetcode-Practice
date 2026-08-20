class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> ans;

        for( int x : nums){
            freq[x]++;
        }


        for(auto&p: freq){
            buckets[p.second].push_back(p.first);
        }

        for(int i = buckets.size()-1; i > 0; i--){
            for(int num : buckets[i]){
                ans.push_back(num);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;
    }
    
};