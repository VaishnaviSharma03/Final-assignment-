//star pattern in row.
#include<stdio.h>
int main()
{
int n, i, j;
printf("Enter number of rows: ");
scanf("%d",&n);
for(i = 1; i <= n; i++)
{
for(j = i; j < n; j++)
{
printf(" ");
}
for(j = 1; j <= i; j++)
{
printf("*");
}
printf("\n");
}
for(i = n; i >= 1; i--)
{
for(j = i; j <= n; j++)
{
printf(" ");
}
for(j = 1; j < i; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
