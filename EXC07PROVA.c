//7)Desenvolva uma função que receba um número inteiro e determine se ele é par
//ou ímpar. Exiba uma mensagem correspondente para cada caso.


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
