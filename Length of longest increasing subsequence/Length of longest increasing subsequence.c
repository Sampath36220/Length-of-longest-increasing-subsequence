// Largest sub-sequence array
#include <stdio.h>
int max(int x, int y){
    return (x > y) ? x : y;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int dp[n];
    for(int i = 0; i < n; i++){
        dp[i] = 1;
    }
    int mx = dp[0];
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i]  < a[j]){
                dp[j] = max(dp[j] , 1 + dp[i]);
                if(dp[j] > mx){
                    mx = dp[j];
                }
            }
        }
    }
    printf("\nLength of longest increasing subsequence is : %d", mx);
    return 0;
}

