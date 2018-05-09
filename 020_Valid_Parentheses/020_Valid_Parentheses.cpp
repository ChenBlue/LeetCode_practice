class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(paranthesisType(s[i]));
            } else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(st.empty() || st.top() != paranthesisType(s[i])){
                    return false;
                } else {
                    st.pop();
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
    int paranthesisType(char c)
    {
        switch(c){
            case '(':
            case ')':
                return 0;
            case '[':
            case ']':
                return 1;
            case '{':
            case '}':
                return 2;
            default:
                return 0;
        }
    }
};
