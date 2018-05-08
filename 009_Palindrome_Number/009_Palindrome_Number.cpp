class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x >= 10 && (x%10) == 0))  return false;
        
        int half_rever = 0;
        while(x > half_rever){
            half_rever = half_rever*10 + x%10;
            x /= 10;
        }
        
        if(x == half_rever || half_rever/10 == x) return true;
        else return false;
    }
};
