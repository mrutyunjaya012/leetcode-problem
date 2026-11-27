class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mpp;

        for (int x : nums) {
            mpp[x]++;
        }
        int maxi = 0;
        for (auto it : mpp) {
            int num = it.first;
            if (mpp.find(num - 1) != mpp.end()) {
                int sum = mpp[num] + mpp[num - 1];
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};