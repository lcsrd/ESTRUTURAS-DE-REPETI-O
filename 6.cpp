#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");
    int contador; //variável de controle do loop
    
    for(contador = 100; contador <= 200; contador++)
    {
        if(contador % 2 != 0){
        	printf("%d ", contador);
		}
    }
    
  
  return(0);
}

