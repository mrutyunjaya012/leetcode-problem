// Last updated: 13/07/2026, 16:16:08
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int low=0; 
        int high=n-1;
        while(low<high){
            swap(s[low],s[high]);
            low++;
            high--;
        }
    }
};