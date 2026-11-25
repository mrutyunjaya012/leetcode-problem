class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
         vector<int> mpp(1001, 0);
        vector<int>ans;
        
        
        for(int i=0; i<arr1.size() ; i++){
            mpp[arr1[i]]++;
        }

        for(int i=0; i<arr2.size(); i++){
            while(mpp[arr2[i]]>0){
                ans.push_back(arr2[i]);
                mpp[arr2[i]]--;
            }
        }

        for(int i=0; i<=1000; i++){
            while(mpp[i]>0){
                ans.push_back(i);
                mpp[i]--;
            }
        }
        return ans;

    }
};