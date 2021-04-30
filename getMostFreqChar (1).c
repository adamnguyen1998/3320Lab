#include<stdio.h>                                                                                                                           
void main(int argc, char *argv[])                                                                                                           
{                                                                                                                                           
FILE *file;                                                                                                                  
char character; 

                                                                                                            
char s[26]="abcdefghijklmnopqrstuvwxyz";                                                                                      
int count[26],i,maxnumber=0,maxcount=0; 
                                                               
for(i=0;i<26;i++)                                                                                                                   
count[i]=0;                                                                  
file=fopen(argv[1],"r");                                                                                                             
while((character=getc(file))!=EOF)                                                                                                  
{                 
putchar(character);
for(i=0;s[i]!='\0';i++)                                                         {                                                                              if(character==s[i] || character==(s[i]-32))                                         
 count[i]++; 
 }                                                                                                                           
}                                                                              fclose(file);                                                                    for(i=0;s[i]!='\0';i++)                                                       
if(maxnumber<count[i])                                                      
{                                                                     
maxnumber=count[i];
maxcount=i;
}                                                                                                                                   
printf("\n According to the text file, the most frequent letter is '%c'. It appeared %d times.\n",s[maxcount],maxnumber);                                         
}
