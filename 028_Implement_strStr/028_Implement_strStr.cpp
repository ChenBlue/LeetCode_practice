class Solution {
public:
    int strStr(string haystack, string needle) {
        //haystack = "aaaab";
        //needle = "ba";
        
        if(needle.size() == 0) return 0;
        int haySize = haystack.size(), neeSize = needle.size();
        if (haySize < neeSize) return -1;
        
        int j = 0;
        for(int i = 0; i <= haySize - neeSize; i++){
            if(haystack[i] == needle[0]){
                int k = 0;
                for(int j = i; j < haySize, k < neeSize; j++, k++){
                    if(haystack[j] != needle[k]) break;
                }
                if(k == neeSize) 
                    return i;
            }
        }
        return -1;
    }
};
