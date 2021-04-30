#include<stdio.h>
#include <string.h>

//The function to sort array
void sort_alphabetic(char *arr[], char input); //Program doesn't seem to like going without declaring function here first.


int main(){
        
        //Array of elements
        char *arr[8] = {"Systems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};
        
        //Variables
        int i;
        char input;
        
        //Current array
        printf("The inital array is : \n");
        for(i=0;i<8;i++){ //Known that size is 8
                printf("%s\t", arr[i]);
        }
	printf("\n"); //Organizing    
        //Input to ascend to descend
        printf("\nType 'A' or 'a' to sort by ascending order, or type 'D' or 'd' to sort by descending order: ");
        scanf("%c", &input);
        
        //Use function to sort array
        sort_alphabetic(arr, input);
        
        //print array after sorting
        printf("\nThe array after sorting is : \n");
        for(i=0;i<8;i++){
                printf("%s\t", arr[i]);
        }
        printf("\n"); //Organizing 
        
        
        return 0; //Finished
        
}




//Use this function to sort array (had to declare at top)
void sort_alphabetic(char *arr[], char input){
        
        
        int i,j;
        
        //If character is ascending
        if(input == 'A' || input == 'a'){
                for (i = 0; i < 7 ; i++){

                for (j = i + 1; j < 8; j++){
   //If first string is greater (later string), the two compared strings are swapped.
                    if (strcasecmp(arr[i], arr[j]) > 0) {
                        
                        char *temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    
                                }
                }
            }
        }
        
        //If character is descending
        else if(input == 'D' || input == 'd'){
                for (i = 0; i < 7 ; i++){

                for (j = i + 1; j < 8; j++){
        
   //Compares each String and if first string is lesser, the second is swapped with the first
                    if (strcasecmp(arr[i], arr[j]) < 0) {
                        
                        char *temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    
                                }
                }
            }
        }
        
        //When input is neither A/a nor d/D
        else{
                printf("\nPlease restart program using the correct parameters next time. The original array is unsorted.\n");
        }
        
}
