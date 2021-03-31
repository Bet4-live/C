#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int sayi1,sayi2,sonuc;
	char islem;
	sayi1=51;
	sayi2=82;
	printf("islemi girin: ");
	scanf("%s",&islem);
	
	switch(islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			printf("Sonuc: %d",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;
			printf("Sonuc: %d",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;
			printf("Sonuc: %d",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			printf("Sonuc: %d");
			break;
		default: printf("Hatali islem Sembolu");
		break; 	
	}
	
	
	
	
	return 0;
}
