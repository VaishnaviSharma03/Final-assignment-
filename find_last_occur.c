#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],w[1000];
    int n,a[1000],i,j,k=1,l,found=0,t=0,b;

    printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);
    a[0]=-1;
    for(i=0;s[i];i++)
    {
    	if(s[i]==' ')
    	{
    		a[k++]=i;
		}
	}
	j=strlen(s);

	for(k--;k>=0;k--)
	{
		n=j-a[k]-1;

		if(n==strlen(w))
		{
			t=0;
			for(l=0;w[l];l++)
			{
				if(s[a[k]+l+1]==w[l])
				{
					t++;
				}
			}
		}
		if(t==strlen(w))
		{
				found=1;
				break;
		}
		j=a[k];
 	}
	if(found)
	 printf("word '%s'  is last occurred at location:%d ",w,a[k]+1);
    else
        printf("word is not occurred in the string ");
    return 0;

}
