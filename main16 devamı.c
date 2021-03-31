#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi,sayi2,sonuc,secim;
	
	
	sayi1=12
	sayi2=16;
	
	
	
	printf("Matematik Menusu\n");
	printf("******************\n\n");
	printf("1-Kare de alan ve cevre hesabi\n");
	printf("2-Girilen Sayinin kupu\n");
	printf("3-Cemberde alan ve cevre hesabi\n");
    printf("4-5x2+7x+9 x e gore islemin sonucu\n");
    printf("5-Dikdortgende alan ve cevre hesabi\n\n");
	printf("isleminiz secin:  ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			printf("Karenin alani: %d",(sayi1*sayi1));
			printf("Karenin cevresi: %d",(sayi1*4));
		break;
		case 2:
		    printf("Sayinin Kupu: %d",(sayi1*sayi1*sayi1));
		break;		
	}
	
	
	return 0;
}
