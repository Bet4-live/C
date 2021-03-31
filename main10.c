#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//klavyeden girilen dereceye göre suyun durumunu yazdýran programý kodlayýn
	
	printf("****Suyun Durumu*****\n\n");
	
	int su;
	
	printf("Sicaklik Degerini Girin: ");
	scanf("%d",&su);

    if(su<=0)
	{
		printf("Su Buz Halinde ");
	}	
	if(su>0 && su <100)
	{
		printf("Su Sivi Halde ");
	}
	if(su>=100)
	{
		printf("Su Buhar Halinde");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
