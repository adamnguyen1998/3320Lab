#include<stdio.h>
#include <string.h>
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
int length, point, new_length; //Declares variables
length=strlen(password); 
// check to see if less than 10 characters.
if(length!=10)
{
new_length=10-length; //Determines how many characters short.
point=5*new_length; //Deduct 5 points for each missing character.
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
else{
// when characters is at least 10
printf("The password is safe. \n");
}
}
