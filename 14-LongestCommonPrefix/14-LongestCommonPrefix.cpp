// Last updated: 13/07/2026, 16:20:46
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string l=strs.front();
        string r=strs.back();

        int i=0;
        while(i<l.length() && i<r.length() && l[i]==r[i]){
            i++;
        }
        return strs[0].substr(0,i);
    }
};