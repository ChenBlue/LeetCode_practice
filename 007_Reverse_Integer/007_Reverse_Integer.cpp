class Solution {
public:
    int reverse(int x) {
        //x = -123;
        int rev = 0;
        int temp = 0;
        
        while(x != 0){
            temp = rev;
            rev = rev*10 + x%10;
            if(rev/10 != temp) return 0;
            x = x/10;
        }
        
        return rev;
    }
};
