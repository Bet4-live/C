#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//dikt�rgen alan ve �evresi
	//de�er: k�sa kenar,uzun kenar
	//Alan: k�sa Kenar * uzun  Kenar
	//�evre: k�saKenar + k�sa kenar + uzun kenar + uzun kenar
	
	
	int kisa,uzun,alan,cevre;
	kisa=8;
	uzun=10;
	alan=kisa*uzun;
	cevre=2*(kisa+uzun);
	printf("cevre: %d\n",cevre);
	printf("alan: %d",alan);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
