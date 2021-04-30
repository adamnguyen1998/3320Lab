#include<stdio.h>

int main()
{
int number =1;
printf("Enter number to calculate the new integer.\n");
scanf("%d", &number);
printf("The Original integer: %d\n",number);

int bitShiftLeft3 = (number) << 3;
//printf(bitShiftLeft3);
int numberComplement = (~number);
//printf(numberComplement);

printf("The left 3 bit shift value is %d \n", bitShiftLeft3);
printf("The numberComplement is %d \n", numberComplement);
int result = bitShiftLeft3 + numberComplement;

printf("The new added number is %d \n", result);

printf("The orignal number is %d \n", number);




return 0;
}
