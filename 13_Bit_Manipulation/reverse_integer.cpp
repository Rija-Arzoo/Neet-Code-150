// Reverse Integer
class Solution {
public:
    int reverse(int x) {
         if(x == INT_MIN) return 0; 
        int last_digit,sign=1,reversed=0;
        if(x<0)
        {
            sign=-1;
            x=-x;
        }
        while(x!=0)
        {
            last_digit=x%10;
            if(reversed>INT_MAX/10)
                return 0;
            reversed=reversed*10 + last_digit;
            x=x/10;
        }
       if(sign==-1) 
          reversed=-reversed;
        return reversed;
    }
};
