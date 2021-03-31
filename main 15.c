#include <stdio.h>
#include <stdlib.h>



int main() 
{
	
	int sayi,faktoryel;
	faktoryel=1;
	sayi=5;
	
	   while(sayi>1)
	     {
		 
	    	faktoryel=faktoryel*sayi;
		    sayi--;
	     }
	printf("Sonuc: %d",faktoryel);
	
	return 0;
}
