#include<stdio.h>
#define TAX_RATE 0.15
int main(){
char grade;
int units;
double price;
double totalCost;
double tax;
double finalCost;

printf("Enter grade: ");
scanf("%c", &grade);

printf("Enter units: ");
scanf("%d", &units);

printf("Enter price: ");
scanf("%lf", &price);

totalCost = units * price;
tax = totalCost * TAX_RATE;
finalCost = totalCost + tax;


printf("Grade     : %c\n", grade);
printf("Units     : %d\n", units);
printf("Price     : %6.2lf\n", price);
printf("Total Cost: %7.2lf\n", totalCost);
printf("Tax       : %7.2lf\n", tax);
printf("Final Cost: %7.2lf\n", finalCost);


return 0;
}