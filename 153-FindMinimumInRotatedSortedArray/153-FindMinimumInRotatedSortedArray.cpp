// Last updated: 13/07/2026, 16:17:53
class Solution {
public:
    int findMin(vector<int>& nums) {
      int n=nums.size();
      int low=0;
      int high=n-1;

      while(low<high){
        int mid=low+(high-low)/2;
        if(nums[mid]>nums[high]){
            low=mid+1;
        }else{
            high=mid;
        }
      }
      return nums[low];  
    }
};