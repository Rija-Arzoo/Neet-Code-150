// Encode and Decode Strings
class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
for (const string& s : strs) {
    encoded += to_string(s.size()) + "#" + s;
}
return encoded;
    }

    vector<string> decode(string s) {
        vector<string> res;
    int i = 0;
    int n = s.size(); // Total length = 8
    
    while (i < n) {
        int j = i;
        // Step A: '#' ki position dhundo
        while (s[j] != '#') {
            j++;
        }
        
        // Step B: Length nikalo aur integer banao
        int length = stoi(s.substr(i, j - i));
        
        // Step C: Asli word extract karo aur result mein dalo
        res.push_back(s.substr(j + 1, length));
        
        // Step D: Pointer 'i' ko agle word par le jao
        i = j + 1 + length;
    }
    
    return res;
    }
};
