#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int knapsack(int profit[], int weight[], int n, int capacity) {
    int dp[n+1][capacity+1];

    for(int i=0; i<=n; i++) {
        for(int j=0; j<=capacity; j++) {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(weight[i-1] <= j)
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i-1]] + profit[i-1]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][capacity];
}

int main() {
    int n, capacity;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int profit[n], weight[n];
    for(int i=0; i<n; i++) {
        printf("Enter the profit and weight of item %d: ", i+1);
        scanf("%d %d", &profit[i], &weight[i]);
    }

    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    int max_profit = knapsack(profit, weight, n, capacity);

    printf("Maximum profit: %d\n", max_profit);

    return 0;
}
