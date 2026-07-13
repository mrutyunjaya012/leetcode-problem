// Last updated: 13/07/2026, 16:15:47
class Solution {
public:
    bool isPerfectSquare(int num) {
    
        int low=1; 
        int high=num/2;
        if(num==1) return true;
        while(low<=high){
            int mid=low+ (high- low)/2;
            long long square = (long long)mid * mid;
            if(square==num) return true;
            else if(square <num){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        // for(int i=0; i<num/2; i++){
        //     if(i*i==num) return true;
        // }
        return false;
    }
};