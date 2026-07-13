// Last updated: 13/07/2026, 16:14:10
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
      int sumA=accumulate(aliceSizes.begin(), aliceSizes.end(),0);
      int sumB=accumulate(bobSizes.begin(), bobSizes.end(),0);

      unordered_set<int>st(bobSizes.begin(), bobSizes.end());
      int diff=(sumB-sumA)/2;

      for(int a:aliceSizes){
        int tar=a+diff;

        if(st.count(tar)){
            return {a, tar};
        }
      }
      return {};

    }
};