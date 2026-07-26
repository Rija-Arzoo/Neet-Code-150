// Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
    for(int i=digits.size()-1; i>=0; i--) {
    if(digits[i]+carry < 10) {
        digits[i]++;
        carry=0;
        return digits;
    }
    if(digits[i]+carry==10){
        digits[i]=0;
    }
    
}
 if(carry==1){
digits.insert(digits.begin(), 1);
}
return digits;
 
        
    }
};