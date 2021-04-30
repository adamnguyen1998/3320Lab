#include <stdio.h>
struct country_names {
	char *country;
	int code;
};
struct country_names country_codes[] =
{
	{"Argentina", 54},
	{"Bangladesh", 880},
	{"Brazil", 55},
	{"Burma (Myanmar)", 95},
	{"China", 86},
	{"Colombia", 57},
	{"Egypt", 20},
	{"Ethiopia", 251},
	{"Germany", 49},
	{"India", 91},
	{"Indonesia", 62},
	{"Iran", 98},
	{"Italy", 39},
	{"Japan", 81},
	{"Mexico", 52},
	{"Nigeria", 234},
	{"Pakistan", 92},
	{"Philippines", 63},
	{"United States", 1}
};

void displayCountry(struct country_names country_codes[], int code);
int main(void)
{
	int code;
	printf("Please enter any country code: ");
	scanf("%d", &code);
	displayCountry(country_codes,code);
	return 0;
}
void displayCountry(struct country_names country_codes[], int code){
	int i;
	for (i = 0; i <20; i++){
	 if (code == country_codes[i].code){
	  printf("The country with this code %d is %s\n",
			code, country_codes[i].country);
			break;
	}
	}
if(i==20){
	printf("No corresponding country found\n");
	}
}
