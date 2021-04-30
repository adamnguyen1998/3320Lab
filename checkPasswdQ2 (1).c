#include<stdio.h>
#include <string.h>
//#include <ctype.h>
int main()
{
// declare variable.
char ch[10];
// input password
printf("Enter a password : ");
scanf("%s", ch); //Scans for string for input.
void check(char* password);
check(ch); //Execute function

return 0; //End
}

void check(char* password) { //Function
int lower = 1; 
int upper = 1; 
int digit = 1; //Declares variables
int consecutive = 0;
int point = 0;
int length=strlen(password); 
int i = 0;
for (i = 0; password[i] != 0; i++) { //checking each element

if (password[i+2] - password[i+1] == 1 && password[i+1] - password[i] == 1 && i + 2 < length) {
consecutive = 1; //Requires comparing two characters and seeing if the difference is 1. Also it is not possible to check an element beyond the length
}

if (islower(password[i])) {
lower = 0; //Checks if there is a single element that has lower case
}
if (isupper(password[i])) {
upper = 0; //Checks if there is a single element that has upper case
}
if (isdigit(password[i])) {
digit = 0; //Checks if there is a single element that has digit
}

}
if(lower == 1) //If has no lower case, deduct 20 points.
point = point + 20;
if(upper == 1) //If has no upper case, deduct 20 points.
point = point + 20;
if(digit == 1) //If has no digits, deduct 20 points.
point = point + 20;
if(consecutive == 1) //If contains consecutive characters, 20 points off.
point = point + 20;
//printf("%d",point); //Debugging
// check if points deducted is greater than 30. If so, password is unsafe.
if(point>30)
{
// display values and message should points be greater than 30
printf("Deductions: %d. Deductions must not be greater than 30. \nThe password is unsafe! Please reset. \n", point);
}
else{
// display safe message when point <=30
printf("The password is safe. \n");
}


}
