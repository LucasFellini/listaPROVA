//1. Crie uma fun��o que receba um n�mero inteiro de 1 a 10 e retorne 1 se o n�mero
//for primo. Caso contr�rio, n�o retorne nada. Voc� n�o pode usar la�os de repeti��o,
//por essa raz�o, limite a verifica��o a um conjunto pequeno de n�meros para
//verificar se s�o primos. Um n�mero primo � divis�vel apenas por 1 e por ele mesmo.

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
