//	WRITE A C PROGRAM TO CHECK WHETHER A NUMBER IS NEGATIVE, POSITIVE OR ZERO.

#include <stdio.h>

int main() {
   int num;

   printf("Enter a number: ");
   scanf("%d", &num);

   if(num > 0) {
      printf("%d is a positive number.", num);
   } else if(num < 0) {
      printf("%d is a negative number.", num);
   } else {
      printf("%d is zero.", num);
   }

   return 0;
}
