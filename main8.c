#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Ygs 1 Puan Türü hesaplama
	//Türkçe: 1.999
	//Matematik: 3.998
	//Sosyal Bilgiler: 1
	//Fen Bilgisi: 2.999
	//Taban: 100.160
	
	float Turkce,matematik,sosyal,fen,taban,toplampuan;
	
    taban=100.160;
    printf("Turkce Netiniz: ");
    scanf("%f",&Turkce);
    
    printf("Matematik Netiniz: ");
    scanf("%f",&matematik);
    
	printf("Sosyal Bilgiler Netiniz: ");
	scanf("%f",&sosyal);
	
	printf("Fen Bilgisi Netiniz: ");
	scanf("%f",&fen);
	
	
	toplampuan=Turkce*1.999+matematik*3.998+sosyal*1+fen*2.999+taban;
	printf("Ygs - 1 Puan Turunde Sonucunuz: %f",toplampuan);
																		
	
	
	
	
	return 0;
}
