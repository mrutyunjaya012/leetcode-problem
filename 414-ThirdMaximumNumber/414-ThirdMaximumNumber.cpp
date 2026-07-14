// Last updated: 14/07/2026, 14:21:31
class Solution {
public:
    int thirdMax(vector<int>& nums) {
    //   sort(nums.begin(),nums.end());
    //   int n=nums.size();
    //   int cnt=1;
    //   for(int i=n-2; i>=0; i--){
    //     if(nums[i]!=nums[i+1]){
    //         cnt++;
    //     if(cnt==3){
    //         return nums[i];
    //     }
    //     }
    //   }
    //   return nums[n-1];
    // } // O(nlog n)


      long long first=LLONG_MIN;
    long long second=LLONG_MIN;
    long long third=LLONG_MIN;

    for(int num: nums){
        if(num==first || num==second || num ==third){
            continue;
        }
        if(num>first){
            third=second;
            second=first;
            first=num;
        }else if(num>second){
            third=second;
            second=num;
        }else if(num>third){
            third=num;
        }
    }
    return (third==LLONG_MIN)? first : third ;
    }
    
};