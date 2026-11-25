class Solution {
public:
    int heightChecker(vector<int>& heights) {
      int n=heights.size();
      int i=0;
      int cnt=0;
      vector<int> temp =heights;
      sort(heights.begin(), heights.end());
      while(i<n){
        if( heights[i]!=temp[i]){
            cnt++;
        }
        i++;
      }
      return cnt;  
    }
};