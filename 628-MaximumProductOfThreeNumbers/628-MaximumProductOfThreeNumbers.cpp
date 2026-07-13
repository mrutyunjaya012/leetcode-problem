// Last updated: 13/07/2026, 16:14:49
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
    sort(nums.begin(), nums.end());

    return max(
        nums[n-1] * nums[n-2] * nums[n-3] , 
        nums[0] * nums[1] * nums[n-1]
    );
    }
};