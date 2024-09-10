//1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
//for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
//por essa razão, limite a verificação a um conjunto pequeno de números para
//verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.

#include <stdio.h>

int primo (int a) {
	if(a == 2 || a == 3 || a == 5 || a == 7) {
		return 1;
	}else
	
	return 0;
}

int main () {
	
	int n, p;
	
	printf("Informe um numero inteiro de 1 a 10:");
	scanf("%d", &n);
	
	p = primo(n);
	
	if (p == 1){
	printf("%d",p);
	}
	
	return 0;	
}
