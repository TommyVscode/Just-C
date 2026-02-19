
#include <stdio.h>
#include <stdlib.h> /* it contains predefined function abs() for computing
                     the absolute value of integers */

int main() {
    int t;  // test cases
    scanf("%d", &t);

    while (t--) {
        int n, x, a, b;
        scanf("%d %d %d %d", &n, &x, &a, &b);


        int initialDistance = abs(a - b);// abs for getting absolute value in their distance

        // Calculate the maximum possible distance we can get after at most x swaps
        // use the logic in conditional or ternary syntax that will find the exact distance.
        int maxDistance = (initialDistance + x < n - 1) ? initialDistance + x : n - 1;


        printf("%d \n", maxDistance);
    }

    return 0;
}
