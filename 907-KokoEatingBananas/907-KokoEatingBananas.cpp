// Last updated: 13/07/2026, 16:14:22
class Solution {
public:
    int findmax(vector<int>& nums){
        int n=nums.size();
        int maxi=INT_MAX;
        for(int i=0; i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }
    int calulateHour(vector<int>& nums, int h){
       int n=nums.size();
       long long total=0;
       for(int i=0; i<n; i++){
        total+= (nums[i] + h -1) / h;
       }
       return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1; 
        int high=findmax(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalH=calulateHour(piles, mid);
            if(totalH<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};