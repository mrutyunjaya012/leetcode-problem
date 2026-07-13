// Last updated: 13/07/2026, 16:20:02
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};
