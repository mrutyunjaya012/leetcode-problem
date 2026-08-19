class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int c=0;
            int p=nums[i];
            while(p!=0){
                p=p/10;
                c++;
            }  
            if(c%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};