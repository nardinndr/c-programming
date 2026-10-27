#include <stdio.h>

int main(){
   double radius;
   double area;
   double Circumference;
   const double pi = 3.14159;
   printf("enter the radius: ");
   scanf("%lf",&radius);

   area = pi* radius * radius;
   Circumference = 2 * pi * radius;
   // Nachkommastellen : %.2f
   printf("area = %.2f\n", area);
   printf("Circumference: %.2f\n", Circumference);


   return 0;

}