class Solution {
public:
    int mySqrt(int x) {
        if(!x) return 0;
        else if(x == 1) return 1;
        int l = 0;
        int r = x;
        
        while(true){
            int m = (l+r)/2;
            
            if(m > x/m) {
                r = m - 1;
            } else {
                if (m + 1 > x/(m + 1))
                    return m;
                l = m + 1;
            }
        }
    }
};
