// Last updated: 13/07/2026, 16:16:36
class Solution {
public:
    int addDigits(int num) {
       if(num==0) return 0;
       int d=0;
       while(num!=0){
        d=d+num%10;
        num/=10;
       } 
       if(d>9){
        return addDigits(d);
       }else{
        return d;
       }
    }
};