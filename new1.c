#include <stdio.h>

int main() {
    int count = 0;
    int num = 2; // Start checking from 2, the first prime number

    while (count < 20) {
        int is_prime = 1; // Assume num is prime initially

        // Check for factors from 2 to num-1
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = 0; // num is divisible by i, so it's not prime
                break;
            }
        }

        // If num is still prime, print it and increment the count
        if (is_prime) {
            printf("%d ", num);
            count++;
        }

     //   num++;
    }

    return 0;
}

