// Group Anagrams
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>groupMap;

        for(auto &s:strs)
        {
            string value=s;
            sort(s.begin(),s.end());
            groupMap[s].push_back(value);

        }

        vector<vector<string>>result;
        for(auto &pair:groupMap)
        {
            result.push_back(pair.second);
        }
        return result;
    }
};