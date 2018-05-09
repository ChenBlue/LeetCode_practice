class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = " ";
        string tmp;
        if(!strs.size()) return "";
        
        
        string prefix = strs[0];
        int j;
        for(int i = 0; i < strs.size(); i++){
            tmp = strs[i];
            for(j = 0; j < tmp.length(); j++){
                if(prefix[j] != tmp[j]){
                    break;
                }
            }
            prefix[j] = '\0';
        }
        return prefix;
    }
};
