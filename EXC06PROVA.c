//6. Elabore uma fun��o que receba a nota de um aluno (de 0 a 10) e classifique se
//ele foi aprovado ou reprovado. A aprova��o ocorre se a nota for 7 ou superior, e
//reprova��o caso contr�rio. A fun��o deve exibir mensagens para os dois casos.

#include <stdio.h>


void verifica (int nota) {
	if (nota >= 7) {
		printf("Aprovado");
	}else
		printf("Reprovado");
}

int main() {
	
	int nota;
	
	printf("Informe a nota do aluno :");
	scanf("%d", &nota);
	
	verifica(nota);
}
