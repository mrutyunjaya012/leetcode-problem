// Last updated: 13/07/2026, 16:16:27
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long sum=n*(n+1)/2;
        long s=0;
        for(int i=0; i<n;i++){
            s+=nums[i];
        }
        return sum-s;
    }

};