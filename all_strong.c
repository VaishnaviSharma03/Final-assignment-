//Write a C program to print all Strong numbers between 1 to n.
#include <stdio.h>

int main(){
    int N, num, temp, digit, nFactorial, counter, factSum;

    printf("To find all strong numbers between 1 to N");
    printf("Enter value of N");
    scanf("%d",&N);

    printf("List of strong numbers between 1 to %d\n", N);
    for(num = 1; num <= N; num++){
        temp = num;
        factSum = 0;
        while(temp){
           digit = temp%10;

           for(counter=1, factorial=1; counter<=digit; counter++){
               factorial = factorial * counter;
           }
           factSum += factorial;
           temp = temp/10;
        }

        if(factSum == num)
           printf("%d ", num);

    }
    return 0;
}
