//7)Desenvolva uma fun��o que receba um n�mero inteiro e determine se ele � par
//ou �mpar. Exiba uma mensagem correspondente para cada caso.


#include <stdio.h>

int parouimpar(x) {
	if (x % 2 == 0){
		printf("%d e par", x);
	}else
		printf("%d e impar", x);
}

int main () {
	
	int x;
	
	printf("Informe um valor : ");
	scanf("%d", &x);
	
	parouimpar(x);
	
	return 0;
}
