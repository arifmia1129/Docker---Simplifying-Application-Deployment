#include <stdio.h>

int main() {
    int number, count = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Handle the special case where number is 0
    if (number == 0) {
        count = 1;
    } else {
        // Handle negative numbers
        if (number < 0) {
            number = -number;
        }
        
        // Count digits
        while (number != 0) {
            number /= 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
