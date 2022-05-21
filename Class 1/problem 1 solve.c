#include <stdio.h>
int main()
{
   double basic_salary,gross_salary;
   printf("Enter Basic Salary: \n");
   scanf("%lf",&basic_salary);
   gross_salary=basic_salary-basic_salary*.2-basic_salary*.4;
   printf("%.2lf",gross_salary);
   return 0;
}
