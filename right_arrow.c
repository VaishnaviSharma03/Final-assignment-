//right arrow star pattern
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,n;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d%c",&n,&ch);
    printf("Enter the symbol: ");
    ch=getchar();
    for(i=1;i<=n;i++)
    {
	   for(j=1;j<=n-i;j++)

        {
            printf(" ");


        }
	    for(j=i;j<=n;j++)

        {


           printf("%c",ch);

        }


         printf("\n");

    }

	for(i=1;i<n;i++)
    {
	    for(j=0;j<i;j++)

        {

             printf(" ");


        }
        for(j=0;j<=i;j++)

        {

            printf("%c",ch);

        }

            printf("\n");

    }


      return 0;
}
