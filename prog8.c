
//	WRITE A C PROGRAM TO INPUT ALL SIDES OF A TRIANGLE AND CHECK WHETHER TRIANGLE IS VALID OR NOT.

#include <stdio.h>

int main() {
   int side1, side2, side3;

   printf("Enter the length of side 1: ");
   scanf("%d", &side1);

   printf("Enter the length of side 2: ");
   scanf("%d", &side2);

   printf("Enter the length of side 3: ");
   scanf("%d", &side3);

   if(side1+side2 > side3 && side1+side3 > side2 && side2+side3 > side1) {
      printf("Triangle is valid.");
   } else {
      printf("Triangle is not valid.");
   }

   return 0;
}
