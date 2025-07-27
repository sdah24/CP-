#include<stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b); // Fixed missing return
}

int main() {
    int x, y;

    // Input prompt
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    // Calculate GCD
    int gcd_result = gcd(x, y);
    printf("GCD: %d\n", gcd_result);

    // Calculate LCM
    int lcm = (x * y) / gcd_result;
    printf("LCM: %d\n", lcm);

    return 0;
}
