#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i,n,temp;

    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);

     printf("before reverse = %s\n",s);


    for(i=0;i<n/2;i++)
    {
    	temp=s[i];
    	s[i]=s[n-i-1];
    	s[n-i-1]=temp;

 	}




    printf("after reverse = %s\n",s);

    return 0;
}
