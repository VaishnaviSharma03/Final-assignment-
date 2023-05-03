//plus star pattern
#include<stdio.h>
int main()
{
 	int i, j, rows;
 	printf("Enter Plus Pattern Rows =  ");
 	scanf("%d", &rows);

    printf("Plus Star Pattern\n");
	for(i = 1; i <= rows * 2 - 1; i++)
	{
        if(i != rows)
        {
            for(j = 1; j <= rows; j++)
            {
                if(j == rows)
                {
                    printf("*");
                }
                printf(" ");
            }
        }
        else
        {
            for(j = 1; j <= rows * 2 - 1; j++)
            {
                printf("*");
            }
        }
		printf("\n");
	}
 	return 0;
}
