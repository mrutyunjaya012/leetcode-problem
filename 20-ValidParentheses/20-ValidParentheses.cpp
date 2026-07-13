// Last updated: 13/07/2026, 16:20:26
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c: s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else {
                if(st.empty()){
                    return false;
                }
            
                if( (c==')' && st.top()!='(') ||
                (c=='}' && st.top()!='{') ||
                (c==']' && st.top()!='[' ))
                {
                    return false;
                }
                st.pop();
            }
        }
            return st.empty();
        }
};