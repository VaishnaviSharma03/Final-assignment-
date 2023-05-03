//Program in C to print a star pyramid pattern.
#include<stdio.h>
int main()
{
int n, s, i, j;
printf("Enter number of rows: ");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(s = i; s < n; s++)
{
printf(" ");
}
for(j = 1; j <= (2 * i - 1); j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
