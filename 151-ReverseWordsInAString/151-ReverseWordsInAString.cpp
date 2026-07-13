// Last updated: 13/07/2026, 16:17:57
class Solution {
public:
    string reverse(string &s , int l , int r){
        while(l<r) {
            swap(s[l++], s[r--]);
        }
        return s;
    }
    string reverseWords(string s) {
        int n=s.length();
        reverse(s, 0, n-1);
        int i=0; 
        int j=0;

        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            } 
            if(i>=n){
                break;
            }

            j=i;
            while(j<n && s[j]!=' ')j++;

            reverse(s, i , j-1);
            i=j;
        }
        string res="";
        for(int k=0; k<n; k++){
            if(s[k]!=' '){
                res+=s[k];
            }else if(!res.empty() && res.back()!=' '){
                res+=' ';
            }
        }
        if(!res.empty() && res.back()==' '){
            res.pop_back();
        }
        return res;
    }
};