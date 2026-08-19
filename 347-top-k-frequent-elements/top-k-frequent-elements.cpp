class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for(int x : nums){
           freq[x]++;
        }

        for(int i = 0; i < k; i++){
            int bestNum = 0, bestCount = 0;

            for(auto&p : freq){
                if(p.second > bestCount){
                    bestCount = p.second;
                    bestNum = p.first;
                }
            }
            ans.push_back(bestNum);
            freq.erase(bestNum);
        }
        return ans;
    }
    
};