#include <stdio.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL,"Portuguese");
	
	int init, rate, term;
	int num, count=1;
	
	printf("Digite o numero incial da P.A: ");
	scanf("%d", &init);
	
	printf("Digite a razao P.A: ");
	scanf("%d", &rate);
	
	printf("Digite o numero de termos da P.A: ");
	scanf("%d", &term);
	
	while(count <= term)
	{
		num = init + (count - 1) * rate;
		printf("Termo %d: %d\n", count,num);
		count++;
	}
}
