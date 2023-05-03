//  C program to print all natural numbers in range


#include <stdio.h>

int main()
{
    int i, start, end;
    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    printf("Natural numbers from %d to %d : \n", start, end);

    for(i=start; i<=end; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
