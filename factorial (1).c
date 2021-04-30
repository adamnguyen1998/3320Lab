#include <stdio.h>

int main()
{
int counter, number, factorial = 1;

printf("Enter number to calculate the factorial of the inputted positive integer\n");
scanf("%d", &number);
for (counter = 1; counter <= number; counter++){
factorial = factorial * counter;
}

if (number < 1)
printf("This is not a valid number.\n");
else
printf("Factorial of %d is %d\n",number,factorial);

return 0;
}
