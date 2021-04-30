#include<stdio.h>
// Write the declaration of function split_time
void split_time(long, int*, int*, int*);
int main(){
int n,hr,min,sec;
printf("Enter seconds:");
scanf("%d",&n);
if(n < 0) {

printf("Seconds cannot be -ve, Please enter non negative value");

}
else{
/* Write the statement to call split_time */
split_time(n, &hr, &min, &sec);
printf("Converted format: %d hour %d mins %d secs", hr, min, sec ); /* Write
the corresponding expressions */
}
return 0;
}
void split_time(long total_sec, int *hr, int *min, int
*sec){ /* Write the statements to calculate hr, min and sec
*/
int remaing_sec = 0;
*hr = total_sec/3600;
remaing_sec = total_sec%3600;
*min = remaing_sec/60;
*sec = remaing_sec%60;

}