#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int su,kola,bilet,misir,toplam;
	
	printf("Misir Adeti: ");
	scanf("%d",&misir);
	
	printf("kola Adeti: ",kola);
	scanf("%d",&kola);
	
	
	printf("Su Adeti: ");
	scanf("%d",&su);
	
	printf("bilet Adeti: ");
	scanf("%d",&bilet);
	
	toplam=misir*2+kola*2+su*1+bilet*8;
	
	printf("Toplam Borcunuz: %d",toplam);
	printf("  TL...");
	
	
	return 0;
}
