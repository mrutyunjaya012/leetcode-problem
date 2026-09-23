class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(), nums1.end());
        unordered_set<int>set2(nums2.begin(), nums2.end());
         int ans1=0;
         int ans2=0;
         for(int num: nums1){
            if(set2.count(num)){
                ans1++;
            }
         }

         for(int num: nums2){
            if(set1.count(num)){
                ans2++;
            }
         }





        // unordered_map<int,int>mpp1;
        // unordered_map<int,int>mpp2;

        // for(int i=0; i<nums1.size(); i++){
        //     mpp1[nums1[i]]++;
        // }
        // for(int i=0; i<nums2.size(); i++){
        //     mpp2[nums2[i]]++;
        // }
        // int ans1=0;
        // int ans2=0;
        // for(const auto &pair: mpp1){
        //     if(mpp2.count(pair.first)){
        //         ans1+=pair.second;
        //     }
        // }
        // for(const auto &pair: mpp2){
        //     if(mpp1.count(pair.first)){
        //         ans2+=pair.second;
        //     }
        // }

        return {ans1, ans2};
    }
};