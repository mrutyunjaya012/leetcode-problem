// Last updated: 13/07/2026, 16:12:51
class Solution {
public:
    bool canBeEqual(string s1, string s2) {

        for(int i = 0; i < 2; i++){
            if(s1[i] != s2[i]){
                swap(s1[i], s1[i+2]);
            }
        }
        return s1==s2;
    }
};