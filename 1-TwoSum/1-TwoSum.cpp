// Last updated: 13/07/2026, 16:21:09
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size();
      unordered_map<int,int>mpp;
      for(int i=0; i<n; i++){
        int m=nums[i];
        int more=target-m;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[m]=i;
      }  
      return {-1,-1};
    }
};