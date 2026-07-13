// Last updated: 13/07/2026, 16:13:55
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int right=n-1;
        int left=0;
        int k=n-1;
        while(left<=right){
            int leftsq=nums[left]*nums[left];
            int rightsq=nums[right]*nums[right];

            if(leftsq<rightsq){
                ans[k]=rightsq;
                right--;
            }
            else{
                ans[k]=leftsq;
                left++;
            }
            k--;
        }
        return ans;
    }
};