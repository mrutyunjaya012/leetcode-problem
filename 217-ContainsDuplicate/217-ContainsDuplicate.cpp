// Last updated: 13/07/2026, 16:16:56
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
    //    sort(nums.begin(),nums.end());
    //    for(int i=1; i<n; i++){
    //     if(nums[i]==nums[i-1]){
    //         return true;
    //     }
    //    }

    unordered_map<int,int>mpp;
    for(int i=0; i<n;i++){
        if(mpp.find(nums[i])!=mpp.end()){
            return true;
        }
        mpp[nums[i]]++;
    }
       return false;
    }
};