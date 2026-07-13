// Last updated: 13/07/2026, 16:14:32
class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev=0;
        int cur=1;
        int ans=0;

        for(int i=1;i<s.length(); i++){
            if(s[i]==s[i-1]){
                cur++;
            }else{
                ans+=min(prev,cur);
                prev=cur;
                cur=1;
            }
        }
            ans+=min(prev,cur);
    return ans;
    }
};