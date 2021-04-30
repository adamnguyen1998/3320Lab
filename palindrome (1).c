#include<stdio.h>
#include<string.h>
int is_palindrome(char *sequence, int seq_length){
int ispalindrome=1; //Assuming palindrome for now
char rev_sequence[50]; //keeps reverse of the sequence
int j=0; //variable to keep current index of reverse sequence
int i; 
for (i = seq_length-1; i >= 0; i--)
{
rev_sequence[j]=sequence[i];
j++;
}
rev_sequence[j]='\0'; //ending the sequence with null character for start
for (i = 0; i < seq_length; i++)
{
if (sequence[i]!=rev_sequence[i])// if any character is not same, sequence is not palindrome.
{
ispalindrome=0; //0 to assume false state.
break;
}
}
return ispalindrome;
}

int main()
{
char sequence[50];
printf("Enter the sequence: ");
scanf("%s",sequence); // taking input from user
if (is_palindrome(sequence,strlen(sequence))) //is_palindrome takes two arguements. One is sequence and the other is length of the sequence
{
printf("%s is a palindrome\n",sequence); //When there was nothing to change default state.
}
else
{
printf("%s is not palindrome\n",sequence); //default state changed.
}
return 0;
}
