#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;  
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int target = 3;
    int count = 0;

    while (count < 5) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == target) {
            count++;
            if (count < 5) {    
 printf("You have entered %d for %d times. Enter it %d more times.\n", target, count, 5 - count);
            }
        }

        if (isPrime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}

		




















