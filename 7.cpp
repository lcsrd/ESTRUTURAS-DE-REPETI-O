#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	int numero, contador, resultado, decisao;
	setlocale( LC_ALL, "Portuguese" );
	
	printf("Digite a tabuada que quer saber: ");
	scanf("%d", &numero);
	
	if(decisao==1){
		printf("Tabuada de %d \n", numero);
		
		for(contador = 0; contador <= 10; contador++){
			resultado = numero * contador;
			
			printf("%d x %d = %d\n", numero, contador, resultado);
		}
	}
	
	else{
		printf("Não foi possivel calcular a tabuada");
	}
return 0;
}
