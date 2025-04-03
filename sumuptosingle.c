#include<stdio.h>

int main() {
    int num, sum;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop until the number becomes a single-digit number
    while (num > 9) {
        sum = 0;

        // Calculate the sum of digits
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        
        num = sum;
    }

    
    printf("Sum of digits until single digit: %d\n", num);

    return 0;
}
