// Last updated: 14/07/2026, 14:21:00
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        // 1.Copy the array.
        // 2.Sort it.
        // 3.Remove duplicates.
        // 4.Assign each unique value a rank starting from 1.
        // 5.Replace every element in the original array with its rank.


        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());
        unordered_map<int , int>mpp;

        for(int i=0; i<temp.size(); i++) {
            mpp[temp[i]]=i+1;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;
    }
};