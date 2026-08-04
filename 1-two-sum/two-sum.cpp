class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 2 7 11 15 | target 9
        //    
        //9-2=7, if 7 exists in the array --> it doesnt so go to 7 and add 2 to the map
        // 9-7=2, 2 exists in the array --> and it exists in the map so return 0,1 as we store (key,value) =(number,index)
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i++){
            if(m.count(target - nums[i]) == 1){
                return {i,m[target-nums[i]]};
            }else{
                m[nums[i]] = i;
            }
        }
        return {0,0};
    }
};