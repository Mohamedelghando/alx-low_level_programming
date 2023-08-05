#include <stdio.h>

int main() {
    // Array to store the values of coins
    int coins[] = {25, 10, 5, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    
    int amount, i;
    int count = 0;
    
    printf("Enter the amount in cents: ");
    scanf("%d", &amount);
    
    printf("Minimum number of coins needed:\n");
    
    for (i = 0; i < numCoins; i++) {
        int coinCount = amount / coins[i];
        amount = amount % coins[i];
        count += coinCount;
        
        if (coinCount > 0) {
            printf("%d coin(s) of %d cent(s)\n", coinCount, coins[i]);
        }
    }
    
    printf("Total number of coins: %d\n", count);
    
    return 0;
}
