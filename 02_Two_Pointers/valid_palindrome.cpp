// Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for(char c :s){
           if(isalnum(c))
               {
               cleaned+=tolower(c);
           }
        }
        string comparison(cleaned.rbegin(),cleaned.rend());
                
     for(int i=0;i<cleaned. size();i++)    
         {    if(cleaned[i]!=comparison[i])
             {
      return false;
         }
     }

     
        return true;
    }
};