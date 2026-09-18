// Two Sum II - Input Array Is Sorted
//approach 1
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>result; 
        int  left=0;
        int right=numbers.size()-1;
        while(left<right) {
          if(numbers[left]+numbers[right] > target)
           right--;
         else if(numbers[left]+numbers[right] < target)
           left++;
          else
            {
                result.push_back(left+1);
                result.push_back(right+1);
                return result;
            }
        }
        return {};
    }
       
    
};

//approach 2
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      unordered_map<int,int> mp;
        //vector<int>result;
      for(int i=0; i<numbers.size(); i++) {
          int complement = target - numbers[i];
          if(mp.count(complement))
          {
            // result.push_back(mp[complement]);  
            // result.push_back(i);     
            return {mp[complement]+1,i+1};         
          }
         else
          {
            mp[numbers[i]] = i;
          }
        }
       // return result;
       return {};
    }
};