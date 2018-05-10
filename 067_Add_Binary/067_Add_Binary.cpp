class Solution {
public:
    string addBinary(string a, string b) {
        string large = "";
        string small = "";
        if(a.size() > b.size()){
            large = a;
            small = b;
        } else{
            large = b;
            small = a;
        }
        
        int carry = 0;
        int i = large.size() - 1;
        for(int j = small.size()-1; j >= 0; i--, j--){
            int sum = large[i]-'0' + small[j]-'0' + carry;
            switch(sum){
                case 1: 
                    large[i] = '1';
                    carry = 0;
                    break;
                case 2: 
                    large[i] = '0';
                    carry = 1;
                    break;
                case 3:
                    large[i] = '1';
                    carry = 1;
                    break;
                default:
                    large[i] = '0';
                    carry = 0;
                    break;
            }
        }
        while(i >= -1 && carry){
            if(i == -1){
                large.insert(0, "1");
                break;
            }
            int sum = large[i]-'0'+carry;
            switch(sum){
                case 1:
                    large[i] = '1';
                    carry = 0;
                    break;
                case 2:
                    large[i] = '0';
                    carry = 1;
                    break;
                default:
                    large[i] = '0';
                    carry = 0;
                    break;
            }
            i--;
        }
        return large;
    }
};
