#include<stdio.h>
#include<string.h>


int main()
{

char input[20];
char smallest_word[20];
char largest_word[20];

printf("Enter Word : ");
scanf("%s",input);
strcpy(smallest_word,input);
strcpy(largest_word,input);

while(strlen(input)!=4)
{

if(strcmp(input,smallest_word)<0)
strcpy(smallest_word,input);

else if (strcmp(input,largest_word)>0)
strcpy(largest_word,input);

printf("Enter Word : ");
scanf("%s",input);
}
/*Last input (even if 4 characters long) is still an input even when program
 * stops accepting inputs after that 4 characters long input) */
if(strcmp(input,smallest_word)<0)
strcpy(smallest_word,input);

else if (strcmp(input,largest_word)>0)
strcpy(largest_word,input);


printf("Smallest (First) word : %s\n",smallest_word);
printf("Largest (Last) word : %s\n",largest_word);

return 0;
}
