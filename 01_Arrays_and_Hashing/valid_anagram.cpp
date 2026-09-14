// Valid Anagram
/*class Solution {
public:
    bool isAnagram(string s, string t) {
        string iterative;
        if(s.size()>t.size())
            iterative=s;
else 
     iterative= t;

unordered_map<char,int>s1;
unordered_map<char,int>t1;
        for(char c: s)
            {
           s1[c]++;
        }
         for(char c: t)
            {
           t1[c]++;
        }
        
        for(char c:iterative)
        {
           if(s1[c]!=t1[c])
               {
            return false;
           }
        }
        
        return true;
    }
};*/

class Solution {
public:
bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    unordered_map<char, int> count;

    for (int i = 0; i < s.size(); i++) {
        count[t[i]]++; 
        count[s[i]]--; 
    }

    for (auto pair : count) {
        if (pair.second != 0) return false;
    }

    return true;
}
};      