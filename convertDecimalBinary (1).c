#include <math.h>
#include <stdio.h>
int main() {
printf("Type \"0\" to to input binary to convert to decimal and \"1\" to input decimal to convert to binary: ");
int input;
scanf("%s", &input);
if (strcmp(&input, "0") == 0){
long long Binary;
printf("Enter Binary number: ");
scanf("%lld", &Binary);

int decima = 0, i = 0, remainder = 0;
while (Binary != 0) {
remainder = Binary % 10;
Binary /= 10;
decima += remainder * pow(2, i);
++i;
}
printf("The inputted number in binary is %d in decimal\n", decima);
}
else
{
int Decimal;
printf("Enter Decimal number: ");
scanf("%d", &Decimal);
long long binar = 0;
int remainder, n = 1;
while (Decimal != 0){
remainder = Decimal % 2;
Decimal /= 2;
binar += remainder * n;
n *= 10;
}
printf("The inputted number in decimal is %lld in binary\n", binar);
}
return 0;
}
