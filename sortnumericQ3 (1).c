#include<stdio.h>
// This can help swap two elements using pointers to make code easier.
void swap_double( double *a, double *b ); //For some reason, functions needs to be mentioned here though placed at bottom.
                        
//Sorting method for array
void sort_numeric( double *a, char input, double count )
{
        int i, j;
    int size=count;
    //Using nested loops for using sorting algorithm to sort
        for( i = 0; i < size; i++ ) {
                for( j = 1; j < size - i;j++ ) {
                //Ascending code for input when A or a
                        if( (*(a + j - 1)) > (*(a + j)) && (input=='A'|| input=='a'))
                                swap_double( (a + j - 1), (a + j) );
        //When Input for descending is here, this code works as the previous lower number is placed higher by swapping.
           	 else if(( *(a + j - 1)) < (*(a + j)) && (input=='D'||input=='d'))
                                swap_double( (a + j - 1), (a + j) );

                }

        }

}




int main()
{
	
    double k, j, h;
    int count = 0;



double *arr = (double *)malloc(sizeof(double)); // allocate the memory for your array. Starts at size 1.
printf("Enter the number (-1 to stop and -1 does not count into array): ");
double input_num;
scanf("%lf", &input_num); //Insert numbers here
while(input_num != -1)

    {
        
        arr[count] = input_num;
        
        count++;
        arr = (double *)realloc(arr, sizeof(double)*count+1); //Increase the size of the array by 1. 
        //We do not know initally how large but this allows us to make it any size array
        printf("Enter the number (-1 to stop and -1 does not count into array): ");
        scanf("%lf", &input_num); //Prompts input till -1 is inputted.
        
    }


	int i;
	
	for(i=0;i<count;i++)
	printf(" %lf\n",arr[i]); //Printing Array
    printf("To sort in ascending order, type the following:   A or a\n");
    printf("To sort in desncending order, type the following:   D or d\n");
    printf("Input: "); //Input command to ascend or descend
    
    char input;
    scanf("%c",&input); //Scaner input
    scanf("%c",&input);
    sort_numeric(arr,input,count); //function execution
    printf("After sorting, results is: \n");

    for(i=0;i<count ;i++)
        printf(" %lf\n",arr[i]); //Printing out Array that should be sorted.


}

void swap_double( double *a, double *b ) //Makes swapping easier between two elements
{
        double _t = *a;
         *a = *b;
         *b = _t;

                        }

