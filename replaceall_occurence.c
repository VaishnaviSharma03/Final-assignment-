#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000],c1,c2;
    int  i;

    printf("Enter  the string : ");
    gets(s);

	printf("Enter a character replace: ");
    c1=getchar();
    getchar();
    printf("\nEnter character to replace  %c with : ",c1);
    c2=getchar();
    printf("\n before replace:%s",s);

    for(i=0;s[i];i++);
    i--;

    for(;i>=0;i--)
	{
		if(s[i]==c1)
		{
		   s[i]=c2;
		   break;
	    }
	}

    printf("\nafter replace:%s",s);


    return 0;
}
