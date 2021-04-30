#include <stdio.h>

int main(){
int item_number;
double item_price;
int quantity;
char date[20];

printf("Enter item number:");
scanf("%d",&item_number);
printf("Enter unit price:");
scanf("%lf",&item_price);
printf("Enter quantity:");
scanf("%d",&quantity);
printf("Enter purchase date:");
scanf("%s", &date);

printf("Item \t Unit price \t Quantity \t Purchase Date \t Total amount \n");
printf("%d \t $%lf \t %d \t \t %s \t $%lf \n \n", item_number, item_price, quantity, date, item_price * quantity);

return 0;
}
