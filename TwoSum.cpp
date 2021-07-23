class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> A;
        int diff;
        unordered_map<int , int> mp;
        for(int i=0; i<nums.size(); i++){
            diff = target - nums[i];
            if(mp.find(diff) != mp.end() && mp.find(diff)->second != i){
                A.push_back(i);
                A.push_back(mp.find(diff)->second);
                return A;
            }
            
            mp[nums[i]]=i;
        }
        return A;
    }
};