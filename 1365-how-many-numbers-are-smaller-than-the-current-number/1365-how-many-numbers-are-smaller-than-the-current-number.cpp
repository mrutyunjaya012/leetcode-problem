class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp=nums;

        sort(temp.begin(), temp.end());

        unordered_map<int,int>mpp;
        int n=nums.size();

        for(int i=0; i<temp.size(); i++){
            if(mpp.find(temp[i])==mpp.end()){
                mpp[temp[i]]=i;
            }
        }

        vector<int>ans;

        for(int i=0; i<n; i++){
            ans.push_back(mpp[nums[i]]);
        }
        return ans;
    }
};
