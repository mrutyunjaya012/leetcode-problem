// Last updated: 13/07/2026, 16:16:11
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    //   if(amount ==0) return 0;
    //   int n= coins.size();
    //   if(n==1 && amount%coins[0]!=0) return -1;
    //   long long c=0;
    //     for(int i=n-1; i>=0; i--){
    //         while(amount>=coins[i]){
    //             if(amount==0){
    //                 break;
    //             }
    //             c++;
    //             amount=amount-coins[i];
    //         }

    //     }
    //     return int(c);
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        for(int i = 1; i <= amount; i++){
            for(int coin : coins){
                if(i - coin >= 0){
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        return (dp[amount] > amount) ? -1 : dp[amount];
    } 
    
};