// Last updated: 13/07/2026, 16:14:02
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0; 
        if(n==1) return 1;
        return fib(n-1) + fib(n-2);
    }
};