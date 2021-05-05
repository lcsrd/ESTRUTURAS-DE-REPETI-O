#include <stdio.h>

int main () {	
	int count;
	float h, hmax, hmin;
	
	for(count = 1; count <= 5; count++){
		printf("Digite a altura (%i): ", count);
		scanf("%f", &h);
		
		if(h >= hmax){
			hmax = h;
		}
		if(h <= hmin){
			hmin = h;
		}
		else {
		}
	}
	printf("Mais alto: %.2f", hmax);
	printf("\n");
	printf("Mais baixo: %.2f", hmin);
return 0;
}
