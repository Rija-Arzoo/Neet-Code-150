// Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,allSum,n=nums.size();
        for(int i=0 ; i<n ;i++)
        {
            sum+=nums[i];
        }
         allSum=n*(n+1)/2;
         return  allSum-sum; ;
    }
};
