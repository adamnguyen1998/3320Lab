#include <stdio.h>

int main (void)
{
	int i, k;
char input[15], output[15];
printf("Enter phone number in the format \"(999)999-9999\" : ");
scanf ("%s", input);
k=0;
for (i=0; i<15; i++)
{
	if (input[i] != '(' && input[i] != ')')
	{
		output[k]=input[i];
		k++;
	}
	else if (input[i] == ')')
	{
		output[k] = '-';
		k++;
	}
}
printf ("You entered this phone number: %s\n", output);
return 0;
}
