class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        
        for (int x : nums){
            if(m.count(x)){ return true;}
            m.insert(x);
        }
        return false;
    }
};