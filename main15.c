#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char ders;
	printf("Ders Kadu: ");
	scanf("%s",&ders);
	
	switch(ders)
	{
		case 't':printf("Turkce"); break;
		case 'm':printf("Matematik"); break;
		case 'f':printf("Fen Bilgisi"); break;
		case 's':printf("Sosyal Bilgisi"); break;
		default: printf("Hatali ya da Buyuk Harf Girisi"); 
		break;
		
	}
	
	
	return 0;
}
