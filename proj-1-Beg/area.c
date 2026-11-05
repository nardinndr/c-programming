#include <stdio.h>
//we can use #define PI 3.14159 expect const double
//after using const you can not chane the value
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
    printf("\n----- Circle Calculator -----\n");
    printf("%-15s : %.2f\n", "Radius", radius);
    printf("%-15s : %.2f\n", "Area", area);
    printf("%-15s : %.2f\n", "Circumference", Circumference);

   return 0;

}