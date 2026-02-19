#include <stdio.h>

int main() {
    int n;
    int last_digit_of_roll = 7;
    printf("Enter a number (7 or 9): ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        printf("%d ", last_digit_of_roll);
    }

    printf("\n");
    return 0;
}
