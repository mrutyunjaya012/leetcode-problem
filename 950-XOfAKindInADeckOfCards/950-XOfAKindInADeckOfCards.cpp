// Last updated: 13/07/2026, 16:14:03
class Solution {
public:
    // int gcdd(int a , int b){
    //         return b==0 ?a : gcd(b, a%b);
    //     }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mpp;
        int n=deck.size();
        if(n==1) return false;
        for(int i=0; i<n; i++){
            mpp[deck[i]]++;
        }
        int g=0;
        for(auto &it: mpp){
            g=__gcd(g, it.second);// we can also use __gcd(g,it.second) inbuild function
        }
        return g>=2;
    }
};