//WRITE A C PROGRAM TO CHECK WHETHER THE TRIANGLE IS EQUILATERAL, ISOSCELES OR SCALENE TRIANGLE.
#include <stdio.h>

int main() {
   int side1, side2, side3;

   printf("Enter the length of side 1: ");
   scanf("%d", &side1);

   printf("Enter the length of side 2: ");
   scanf("%d", &side2);

   printf("Enter the length of side 3: ");
   scanf("%d", &side3);

   if(side1 == side2 && side2 == side3) {
      printf("Triangle is equilateral.");
   } else if(side1 == side2 || side1 == side3 || side2 == side3) {
      printf("Triangle is isosceles.");
   } else {
      printf("Triangle is scalene.");
   }

   return 0;
}
