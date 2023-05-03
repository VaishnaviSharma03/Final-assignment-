//convert octal to binary.
#include<stdio.h>
int main()
{
    int octnum, rev=0, rem;
    printf("Enter any Octal Number: ");
    scanf("%d", &octnum);
    while(octnum!=0)
    {
        rem = octnum%10;
        rev = (rev*10) + rem;
        octnum = octnum/10;
    }
    octnum = rev;
    printf("\nEquivalent Binary value = ");
    while(octnum!=0)
    {
        rem = octnum%10;
        switch(rem)
        {
            case 0: printf("000");
                break;
            case 1: printf("001");
                break;
            case 2: printf("010");
                break;
            case 3: printf("011");
                break;
            case 4: printf("100");
                break;
            case 5: printf("101");
                break;
            case 6: printf("110");
                break;
            case 7: printf("111");
                break;
            default: printf(" InvalidOctalDigit(%d) ", rem);
                break;
        }
        octnum = octnum/10;
    }
    return 0;
}
