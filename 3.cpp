#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"portuguese");
	int num, total, quant=0, pos, neg, porcpos, porcneg;
	float media;
	
	do {
		printf("Digite um número ou 0 pra sair: ");
		scanf("%d", &num);
		
		if (num >= 0){
			pos++;
		} else if (num < 0){
			neg++;
		}
		total = total + (num);
		quant++;
	} while (num != 0);
	quant--;
	pos--;
	media = total / quant;
	porcpos = pos * 100 / quant;
	porcneg = neg * 100 / quant;
	
	printf("Média Aritimética: %.2f", media);
	printf("\n Número Positivos: %d", pos);
	printf("\n Número Negativos: %d", neg);
	printf("\n Porcetagem de Positivos: %d", porcpos);
	printf("\n Porcetagem de Negativos: %d", porcneg);	
		
return 0;	
}
