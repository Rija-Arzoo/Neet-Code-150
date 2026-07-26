// Valid Anagram
class Solution {
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
};
