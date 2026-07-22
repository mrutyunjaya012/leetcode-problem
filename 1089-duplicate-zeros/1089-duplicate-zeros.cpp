class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();

        // vector<int>ans;
        // for(int i=0; i<n; i++){
        //     if(arr[i]==0){
        //         ans.push_back(arr[i]);
        //         ans.push_back(0);
        //     }else{
        //         ans.push_back(arr[i]);
        //     }
        // }

        // for(int i=0; i<n;i++){
        //     arr[i]=ans[i];
        // }


        //time complexity : O(n)
        //space complexity : O(n)
        // but we need to optimize space to O(1).

        int zero=0;
        for(int n:arr){
            if(n==0){
                zero++;
            }
        }

        int i=n-1;
        int j=n+zero-1;

        while (i >= 0) {
            if (j < n)
                arr[j] = arr[i];

            if (arr[i] == 0) {
                j--;
                if (j < n)
                    arr[j] = 0;
            }

            i--;
            j--;
        }
    }
};