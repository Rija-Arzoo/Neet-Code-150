// Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
 int result=0;
 for(int i=0; i<nums.size(); i++){
       result = result ^ nums[i];
           
     }
        return result;
        
    }
};

/*class Solution {
public:
    int singleNumber(vector<int>& nums) {
 unordered_set<int>unique;
 for(int i=0; i<nums.size(); i++){
       if(unique.contains(nums[i]))
       unique.erase(nums[i]);
       else
       unique.insert(nums[i]);
           
     }
        return *unique.begin();;
        
    }
};*/


