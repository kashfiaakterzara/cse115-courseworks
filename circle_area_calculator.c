#include<stdio.h>

#define PI 3.141593

int main(){
   double radius, area;

   printf("Enter the radius: ");
   scanf("%lf", &radius);

   area = PI * radius * radius;
   printf("Area = %.2lf\n", area);


    return 0;
}