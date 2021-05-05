#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");
    int contador; //variável de controle do loop
    int soma = 0;
    
    for(contador = 1; contador <= 500; contador++)
    {
        if(contador % 2 != 0){
        	if(contador % 3 == 0){
        		soma = soma + contador;
			}
		}
    }
    printf("Soma dos ímpares múltiplos de 3 é %d", soma);
    printf("\n");
  
  return(0);
}

