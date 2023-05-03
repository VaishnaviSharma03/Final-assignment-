//Write a C program to convert Binary to Decimal number system.
#include<stdio.h>
#include<math.h>
int main()
{
    int binnum, decnum=0, i=0, rem;
    printf("Enter any binary number: ");
    scanf("%d", &binnum);
    while(binnum!=0)
    {
        rem = binnum%10;
        decnum = decnum + rem*pow(2,i);
        i++;
        binnum = binnum/10;
    }
    printf("\nEquivalent Decimal Value = %d", decnum);
    return 0;
}
