// Last updated: 13/07/2026, 16:19:29
class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int low=0;
        int high=x/2;
        while(low<=high){
            long long  mid =low+(high-low)/2;

            long long  sq=mid * mid;

            if(sq==x) return mid;
            else if(sq<x) low=mid+1;
            else high=mid-1;
        }
        return high;
    }
};