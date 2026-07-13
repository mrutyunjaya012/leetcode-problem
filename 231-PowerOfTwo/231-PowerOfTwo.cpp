// Last updated: 13/07/2026, 16:16:45
class Solution {
public:

    bool isPowerOfTwo(int n) {
        return n>0 && (n& (n-1))==0;
    }
};