class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int prev = 0;
        int now = 0;
        for(string::iterator it = s.end()-1; it >= s.begin(); it --){
            now = romanToInt(*it);
            if(now < prev) num -= now;
            else num += now;
            
            prev = now;
        }
        return num;
    }
    int romanToInt(char c) {
        int num;
        switch(c){
            case('I'): 
                num = 1;
                break;
            case('V'):
                num = 5;
                break;
            case('X'): 
                num = 10;
                break;
            case('L'): 
                num = 50;
                break;
            case('C'): 
                num = 100;
                break;
            case('D'): 
                num = 500;
                break;
            case('M'): 
                num = 1000;
                break;
            default:
                num = 0;
                break;
        }
        return num;
    }
};
