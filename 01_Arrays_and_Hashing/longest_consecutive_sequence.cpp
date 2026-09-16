// Longest Consecutive Sequence
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    int longestStreak = 1;
    int currentStreak = 1;

    // Step 2: Loop through to find consecutive numbers
    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            continue; // Skip duplicates (e.g., [1, 1, 2])
        } 
        else if (nums[i] == nums[i - 1] + 1) {
            currentStreak++;
        } 
        else {
            longestStreak = max(longestStreak, currentStreak);
            currentStreak = 1; // Reset when sequence breaks
        }
    }
    
    return max(longestStreak, currentStreak);
    }
};



// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         // Step 1: Put all numbers in a set for instant O(1) searching
//         unordered_set<int> numSet(nums.begin(), nums.end());
//         int longest = 0;

//         // Step 2: Look at each unique number
//         for (int n : numSet) {
            
//             // Step 3: Check if 'n' is the absolute START of a sequence.
//             // We know it's a start if (n - 1) is NOT in the set.
//             if (numSet.find(n - 1) == numSet.end()) {
//                 int length = 1;

//                 // Step 4: Count how many numbers come after it
//                 while (numSet.find(n + length) != numSet.end()) {
//                     length++;
//                 }

//                 // Keep track of the maximum length we've found
//                 longest = max(longest, length);
//             }
//         }

//         return longest;
//     }
// };
