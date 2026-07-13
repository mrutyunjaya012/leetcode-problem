// Last updated: 13/07/2026, 16:17:07
class Solution {
public:
    int gen(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum=sum+(r*r);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=gen(n);
        while(fast!=1 && slow!=fast){
            slow=gen(slow);
            fast=gen(gen(fast));
        }
        return fast==1;
        
    }
};