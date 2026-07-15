// Last updated: 15/07/2026, 16:46:55
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>mpp;
       int n=nums.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }

        for(auto &it: mpp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
       return ans;
    }
};