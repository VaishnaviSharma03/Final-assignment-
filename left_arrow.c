//left arrow star pattern
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
    i=1;


    while(i<=n)
    {
	     j=1;
	    while(j<=n-i)

        {
            printf(" ");

            j++;
        }

        j=i;

		while(j<=n)

        {


            printf("%c",ch);
		    j++;
        }


        printf("\n");
	    i++;
    }
           i=1;
	while(i<n)
    {
	    j=0;
		while(j<i)

       {

            printf(" ");

		    j++;
      }

		j=0;

		while(j<=i)

        {

            printf("%c",ch);
		    j++;

        }

            printf("\n");
	    i++;
    }


    return 0;
}
