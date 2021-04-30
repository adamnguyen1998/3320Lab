#include <stdio.h>
#include <string.h>
#include <time.h>

//structure for the users to hold data
struct user  
{  
  char firstname[50];
  char lastname[50];
  char vaccinetype[50];
  char zipcode[10];
  char gender[50];
  int dd,mm,yy;
  int previousDoseDay,previousDoseMonth,previousDoseYear;
  int doseNumber;
};  

//Age function as retrive() function
int getage(int afterday, int aftermonth, int afteryear, int beforeday, int beforemonth, int beforeyear) {
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //Represents the number of days in a month for each month for calculations. 
   if (beforeday > afterday) { //Calculates birthday if afterday is before birthday or beforeday.
      afterday = afterday + month[beforemonth - 1];
      aftermonth = aftermonth - 1;
   }
   if (beforemonth > aftermonth) { //Calculates birthday if aftermonth is before birthday month or beforemonth.
      afteryear = afteryear - 1;
      aftermonth = aftermonth + 12;
   }
   
   int final_year = afteryear - beforeyear; //Calculates year.
   
   return final_year;
}
int main(void) {
  struct user users[100]; 
  int input;
  char age[2];
  int i=0;
  char code[8];

    
   //Show an evaluation trial (Will register more people to get at least 10)
    printf("Enter detail : \n");
    //Inputs first name
    printf("Enter First Name : ");
    scanf("%s", users[i].firstname);

    //Input last name
    printf("Enter Last Name : ");
    scanf("%s", users[i].lastname);

    //Input birthdate
    printf("Enter Birth Date(mm/dd/yyyy) : ");
    scanf("%d/%d/%d",&users[i].mm,&users[i].dd,&users[i].yy);

    //Input gender
    printf("Choose gender : \n");
    printf("\t1. Male\n");
    printf("\t2. Female\n");
    printf("\t3. Do not wish to identify\n");
    printf("\tEnter input (Choose number) : ");
    scanf("%d", &input);

    //Must pick or the default option "Do not wish to identify" is picked.
    if(input == 1)
      strcpy(users[i].gender, "Male");
    else if(input == 2)
      strcpy(users[i].gender, "Female");
    else{
      strcpy(users[i].gender, "Do not wish to identify"); 
    }

    //Asks what dose number the user takes. Maximum dose should be 2 as I do not know if there is a third dose.
    printf("Enter Dose Number (Is it going to be dose 1 or 2?) : ");
    scanf("%d", &users[i].doseNumber);
    while(!(users[i].doseNumber == 1 || users[i].doseNumber == 2)){
      printf("Please enter dose number.\n");
      printf("Enter Dose Number (Is it going to be dose 1 or 2?) : ");
    scanf("%d", &users[i].doseNumber);
    }

    //If there is second dose, then have user provide previous dose date
    if(users[i].doseNumber == 2){
      printf("Enter Previous Dose Date(mm/dd/yyyy) : ");
      scanf("%d/%d/%d",&users[i].previousDoseMonth,&users[i].previousDoseDay,&users[i].previousDoseYear);  
    }

    //Choose vaccine type by number
    printf("Type of vaccine (Choose number) : \n");
    printf("\t1. Pfizer\n");
    printf("\t2. Moderna\n");
    printf("\t3. Johnson&Johnson\n\tEnter input : ");
    scanf("%d", &input);

    //Is that choosen type correct or not
    while(input != 1 && input != 2 && input != 3){
      printf("Type of vaccine?\n");
      printf("Choose type of vaccine (Choose number) : \n");
      scanf("%d", &input);
      }

    if(input == 1)
      strcpy(users[i].vaccinetype, "Pfizer");
    else if(input == 2)
      strcpy(users[i].vaccinetype, "Moderna");
    else if(input == 3)
      strcpy(users[i].vaccinetype, "Johnson&Johnson");
    
    

    //Ask user to enter zipcode 
    printf("Enter zipcode : ");
    scanf("%s", users[i].zipcode);


    //copy first letter of first name and last name for code 1 and 2
    code[0] = users[i].firstname[0];
    code[1] = users[i].lastname[0];
    //get current date as of registaration date.
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    //calculate age using function getage()
    int ageTemporary = getage( tm.tm_mday,tm.tm_mon + 1,tm.tm_year + 1900,users[i].dd,users[i].mm,users[i].yy);
    //copy current age as of registration date for next two code characters
    code[2] = (char)(ageTemporary/10+ '0');
    code[3] = (char)(ageTemporary%10+ '0');
    //first letter of vaccinetype to copy for code for 5th alphanumeric code
    code[4] = users[i].vaccinetype[0];
    //copies last 3 digit of zipcode for the 6th - 8th alphanumberic code
    code[5] = users[i].zipcode[2];
    code[6] = users[i].zipcode[3];
    code[7] = users[i].zipcode[4];
	
    
    //display details of the user

    printf("\nFirst Name : %s\n",users[i].firstname);
    printf("Last Name : %s\n",users[i].lastname);
    printf("Birthdate : %d/%d/%d\n",users[i].mm,users[i].dd,users[i].yy);
    printf("Gender : %s\n",users[i].gender);
    printf("Dose Number : %d\n",users[i].doseNumber);
    if(users[i].doseNumber == 2){
      printf("Previous Dose Time : %d/%d/%d\n",users[i].previousDoseMonth,users[i].previousDoseDay,users[i].previousDoseYear);
    }
    printf("Vaccine type : %s\n",users[i].vaccinetype);
    printf("Zipcode : %s\n",users[i].zipcode);

    printf("Code : %s\n\n",code); //Generates the entire code for user.
	void generate_code();
    printf("Information has been registered into CovidDatabase.txt\n");
 	//Shows an evalulation trial for registering at least 10 users by registering each user to a text file. 

        FILE *fp;
    fp = fopen("CovidDatabase.txt","a"); //Appending into file to register
	fprintf(fp,"\nFirst Name : %s\n",users[i].firstname);
    fprintf(fp,"Last Name : %s\n",users[i].lastname);
    fprintf(fp,"Birthdate : %d/%d/%d\n",users[i].mm,users[i].dd,users[i].yy);
    fprintf(fp,"Gender : %s\n",users[i].gender);
    fprintf(fp,"Dose Number : %d\n",users[i].doseNumber);
    if(users[i].doseNumber == 2){
      fprintf(fp,"Previous Dose Time : %d/%d/%d\n",users[i].previousDoseMonth,users[i].previousDoseDay,users[i].previousDoseYear);
    }
    fprintf(fp,"Vaccine type : %s\n",users[i].vaccinetype);
    fprintf(fp,"Zipcode : %s\n",users[i].zipcode);

    fprintf(fp,"Code : %s\n\n",code); 
    void generate_code();


    fclose(fp); //Close appending the file

  return 0;
}

      void generate_code(){
       char code[8];
	int i = 0;
	struct user users[100];
 
        //copy first letter of first name and last name for code 1 and 2
          code[0] = users[i].firstname[0];
          code[1] = users[i].lastname[0];
          //get current date as of registaration date.
          time_t t = time(NULL);
          struct tm tm = *localtime(&t);
      //calculate age using function getage()
      int ageTemporary = getage( tm.tm_mday,tm.tm_mon + 1,tm.tm_year + 1900,users[i].dd,users[i].mm,users[i].yy);
//copy current age as of registration date for next two code characters
                     code[2] = (char)(ageTemporary/10+ '0');
                    code[3] = (char)(ageTemporary%10+ '0');
   //first letter of vaccinetype to copy for code for 5th alphanumeric code
                       code[4] = users[i].vaccinetype[0];
  //copies last 3 digit of zipcode for the 6th - 8th alphanumberic code
                               code[5] = users[i].zipcode[2];
                               code[6] = users[i].zipcode[3];                                                 code[7] = users[i].zipcode[4];
int j;
for (j = 0; j < 8; j++)
 printf("%s" ,code[j]);                                                                                          }
