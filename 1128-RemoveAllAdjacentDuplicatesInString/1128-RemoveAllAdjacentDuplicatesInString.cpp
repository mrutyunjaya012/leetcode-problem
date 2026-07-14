// Last updated: 14/07/2026, 14:21:02
class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>st;

       for(char op:s){
        if(!st.empty() && st.top()==op){
            st.pop();
       }else{
        st.push(op);
       }
    }
       string ans="";
       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(), ans.end());
       return ans;
    }
};