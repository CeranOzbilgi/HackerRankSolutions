#include <stdio.h>

int sum_of_digits(int number) {
    int total_sum = 0;
    
    // Iterate over each digit
    while (number > 0) {
        total_sum += number % 10; // Add the last digit to the sum
        number /= 10; // Remove the last digit
    }
    
    return total_sum;
}

int main() {
    int number;
    
    // Read the input number
    scanf("%d", &number);
    
    // Calculate the sum of digits
    int result = sum_of_digits(number);
    
    // Print the result
    printf("%d\n", result);
    
    return 0;
}
