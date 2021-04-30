#include<stdio.h>
// This can help swap two elements using pointers to make code easier.
void swap_double( double *a, double *b ); //For some reason, functions needs to be mentioned here though placed at bottom.
                        
//Sorting method for array
void sort_numeric( double *a, char input )
{
        int i, j;
    int size=11;
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
	
    double arr[11]={10,0.25,-2342.0,12123,3.145435,6,6,5.999,-2,-5,-109.56};
	int i;
	for(i=0;i<11;i++)
	printf(" %lf\n",arr[i]); //Printing Array
    printf("To sort in ascending order, type the following:   A or a\n");
    printf("To sort in desncending order, type the following:   D or d\n");
    printf("Input: "); //Input command to ascend or descend
    char input;
    scanf("%c",&input); //Scaner input
    sort_numeric(arr,input); //function execution
    printf("After sorting, results is: \n");

    for(i=0;i<11 ;i++)
        printf(" %lf\n",arr[i]); //Printing out Array that should be sorted.


}

void swap_double( double *a, double *b ) //Makes swapping easier between two elements
{
        double _t = *a;
         *a = *b;
         *b = _t;

                        }

