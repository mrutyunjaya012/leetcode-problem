// Last updated: 13/07/2026, 16:13:31
class Solution {
public:
    long long gcd(long long a , long long b){
        return b==0? a : gcd(b, a % b );
    }

    long long lcm(long long a , long long b){
        return (a*b) /gcd(a,b);
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        long long ab=lcm(a,b);
        long long bc=lcm(b,c);
        long long ca=lcm(c,a);
        long long abc=lcm(a, bc);

        int low=1; 
        int high=2e9;

        while(low<=high){
            long long  mid=low+(high-low)/2;
            long long cnt=mid/a + mid/b + mid/c - mid/ab - mid/bc -mid/ca +mid/abc;

            if(cnt<n){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return int(low);
    }
};