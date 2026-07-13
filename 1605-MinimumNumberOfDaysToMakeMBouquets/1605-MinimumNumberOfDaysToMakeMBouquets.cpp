// Last updated: 13/07/2026, 16:13:16
class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int n= bloomDay.size();
        int cnt=0; 
        int b=0;
        for(int i=0; i<n; i++){
            if(bloomDay[i]<=day){
                cnt++;
                if(cnt==k){
                    b++;
                    cnt=0;
                }
            }
            else{
                cnt=0;
            }
        }
        return b>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val= m * 1LL * k * 1LL;
        if(val>bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay, mid , m, k)== true){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return low;

    }
};