// Last updated: 16/07/2026, 16:56:33
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=n*(n+1);
        int sumOdd=n*n;
       return gcd(sumEven, sumOdd);
    }
};