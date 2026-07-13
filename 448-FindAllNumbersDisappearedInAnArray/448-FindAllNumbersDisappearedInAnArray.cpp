// Last updated: 13/07/2026, 16:15:20
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;

        // unordered_map<int,bool>mpp;
        // for(int i=0;i<nums.size(); i++){
        //     mpp[nums[i]]=true;
        // }

        for(int i=0; i<nums.size(); i++){
            int idx=abs(nums[i])-1;
            if(nums[idx]>0){
                nums[idx]=-nums[idx];
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }

        // for(int i=1;i<=nums.size(); i++){
        //     if(!mpp[i]){
        //         ans.push_back(i);
        //     }
        // }
        return ans;
    }
};