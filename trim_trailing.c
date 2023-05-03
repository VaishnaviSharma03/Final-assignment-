#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int  i;

    printf("Enter the string : ");
    gets(s);

	printf("Before trimming trailing white spaces :'%s'",s);
	i=strlen(s)-1;
	while(i>-1)
	{
	  if(s[i]==' '||s[i]=='\t')
	  i--;
	  else
	   break;
	}
	s[i+1]='\0';
    printf("\nAfter trimming trailing white spaces:'%s'",s);
}
