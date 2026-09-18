// Top K Frequent Elements
//optimal 
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Step 1: Count the frequency of each element using a hash map
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        
        // Step 2: Create buckets where the index represents the frequency
        // Size is n + 1 because the maximum possible frequency is n
        vector<vector<int>> bucket(n + 1);
        for (auto& pair : count) {
            int num = pair.first;
            int freq = pair.second;
            bucket[freq].push_back(num);
        }
        
        // Step 3: Iterate backward from the highest frequency to collect top k elements
        vector<int> res;
        for (int i = n; i >= 0; --i) {
            for (int num : bucket[i]) {
                res.push_back(num);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        
        return res;
    }
};

//2nd approach 
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1. Count the frequency of each element
    unordered_map<int, int> count;
    for (int num : nums) {
        count[num]++;
    }

    // 2. Transfer map elements into a vector of pairs for sorting
    vector<pair<int, int>> vec(count.begin(), count.end());

    // 3. Sort the vector in descending order based on frequency
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    // 4. Extract only the top k elements (the keys) into a result vector
    vector<int> result;
    for (int i = 0; i < k && i < vec.size(); ++i) {
        result.push_back(vec[i].first);
    }

    return result;
    }
};