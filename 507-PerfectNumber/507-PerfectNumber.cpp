// Last updated: 13/07/2026, 16:15:07
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1){
            return false;
        }
        int res=1;
      for(int i=2; i*i<=num; i++){
        if(num%i==0){
            res+=i;
        if(i!=num/i){
            res+=num/i;
        }
        }
      }
      return res==num;
    }
};