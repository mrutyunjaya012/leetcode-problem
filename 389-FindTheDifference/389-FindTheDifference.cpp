// Last updated: 13/07/2026, 16:15:42
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        for(char c: s){
            ans^=c;
        }
        for(char c:t){
            ans^=c;
        }
        return ans;
    }
};