#include <stdio.h>
#include <math.h>>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL,"Portuguese");
	
	int init, rate, term;
	int num, count=1;
	
	printf("Digite o numero incial da P.G: ");
	scanf("%d", &init);
	
	printf("Digite a razao P.G: ");
	scanf("%d", &rate);
	
	printf("Digite o numero de termos da P.G: ");
	scanf("%d", &term);
	
	while(count <= term)
	{
		num = init * pow(rate,(count-1));
		printf("Termo %d: %d\n", count,num);
		count++;
	}
}
