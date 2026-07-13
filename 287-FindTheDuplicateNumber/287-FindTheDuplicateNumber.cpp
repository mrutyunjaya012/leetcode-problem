// Last updated: 13/07/2026, 16:16:17
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int low=1;
        // int high=nums.size();

        // while(low<=high){
        //     int mid=low+(high-low)/2;

        //     int cnt=0; 
        //     for(int num:nums){
        //         if(num<=mid) cnt++;
        //     }
        //     if(cnt>mid){
        //         high=mid-1;
        //     }
        //     else{
        //         low=mid+1;
        //     }
        // }
        // return low;    this is binary search aaprach

        int slow=0;
        int fast=0;

        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);

        slow=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};