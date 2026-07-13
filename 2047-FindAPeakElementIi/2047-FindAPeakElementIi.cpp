// Last updated: 13/07/2026, 16:13:00
class Solution {
public:
    int findmax(vector<vector<int>>& mat, int n,int m,int col){
        int maxi=-1;
        int index=-1;
        for(int i=0; i<n; i++){
            if(mat[i][col]>maxi){
                maxi=mat[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m - 1;
        while (low <= high) {
            int mid=low+(high-low)/2;
            int maxindex=findmax(mat,n,m,mid);
            int left=mid-1>=0 ? mat[maxindex][mid-1]: -1;
            int right= mid+1<m ? mat[maxindex][mid+1]:-1;

            if(mat[maxindex][mid] > left && mat[maxindex][mid] > right){
                return {maxindex, mid};
            }else if(mat[maxindex][mid]<right){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return {-1,-1};
    }
};