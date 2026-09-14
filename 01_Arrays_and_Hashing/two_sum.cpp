// Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        //vector<int>result;
        for(int i=0; i<nums.size(); i++) {
          int complement = target - nums[i];
          if(mp.count(complement))
          {
            // result.push_back(mp[complement]);  
            // result.push_back(i);     
            return {mp[complement],i};         
          }
         else
          {
            mp[nums[i]] = i;
          }
        }
       // return result;
       return {};
    }
};
