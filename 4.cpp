#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int num, cont1, cont2, cont3, cont4;
	
	while(num >= 0) {
		printf("Digite um número: ");
		scanf("%d", &num);
		
		if ((num >= 0) && (num <= 25)){
			cont1++;
		} else if ((num >= 26) && (num <= 50)) {
			cont2++;
		} else if ((num >= 51) && (num <= 75)) {
			cont3++;
		} else if ((num >= 76) && (num <= 100)) {
			cont4++;
		} 
	}
	
	printf("De 0 a 25: %i\n", cont1);
	printf("De 26 a 50: %i\n", cont2);
	printf("De 51 a 75: %i\n", cont3);
	printf("De 76 a 100: %i", cont4);
	
return 0;
}


