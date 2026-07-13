// Last updated: 13/07/2026, 16:14:51
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int c=0;
      int sum=0;
      unordered_map<int, int>mpp;
      mpp[0]=1;
      for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
        c+=mpp[sum-k];
        mpp[sum]++;
      }  
      return c;
    }
};