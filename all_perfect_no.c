//Write a C program to print all Perfect numbers between 1 to n.
#include<stdio.h>

int main () {
    int num, i, divSum, counter;

    printf("Enter a number\n");
    scanf("%d", &num);

    for(counter = 1; counter <= num; counter++){
        /* Find all divisors of a number between
        1 to num/2 and add it to divSum */
        divSum = 0;
        for (i = 1; i <= counter/2; i++) {
            if (counter % i == 0) {
                divSum += i;
            }
        }

        if (divSum == counter)
            printf("%d is Perfect Number\n", counter);
    }
    return 0;
}
