class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n;j++){
                swap(matrix[i][j],matrix[j][i]); 
                // don't need do transpose we just swap the elements (except main diagonal)
                // first 2 - 4 , 3 - 7 , 6 - 8  then 
                // reverse the row 
            }
        }
        for(int i=0; i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
