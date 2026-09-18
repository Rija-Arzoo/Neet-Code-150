// 3Sum
// Brute force approach:gives TLE
class Solution {
public:
 vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
        vector<vector<int>> ans;

        set<vector<int>> s; //set<uniqueTriplets>

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                for(int k=j+1; k<n; k++) {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> trip = {nums[i], nums[j], nums[k]};
                        sort(trip.begin(), trip.end());

                        if(s.find(trip) == s.end()) {
                            s.insert(trip);
                            ans.push_back(trip);
                        }
                    }
                }
            }
        }
    return ans;
}
};

//better approach :gives TLE also

class Solution {
public:
 vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();

    set<vector<int>> uniqueTriplets;

    for(int i=0; i<n; i++) {
        int tar = -nums[i];
        set<int> s;

        for(int j=i+1; j<n; j++) {
            int third = tar - nums[j];

            if(s.find(third) != s.end()) {
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }

            s.insert(nums[j]); // Note: s.insert(nums[j]) as visible in code
        }
    }
    vector<vector<int>>ans(uniqueTriplets.begin(),uniqueTriplets.end());
    return ans;
}
};

//optimal approach : using two pointer technique
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n; i++) {
        // Skip duplicates for the first element
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            
            if (sum < 0) 
                j++;
            else if (sum > 0) 
                k--;
            else {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                
                // Skip duplicates for the second elements
                while (j < k && nums[j] == nums[j - 1]) j++;
            }
        }
    }
    return ans;
    }
};