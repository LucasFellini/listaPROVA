//2. Crie uma fun��o que verifique se um ano fornecido � bissexto. Retorne 1 se for
//bissexto, caso contr�rio, a fun��o n�o deve retornar nada. Um ano � bissexto se for
//divis�vel por 4, exceto os divis�veis por 100, a menos que tamb�m sejam divis�veis
//por 400.


#include <stdio.h>

int verifica(int x) {
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) {
		return 1; 
    }else 
    	return 0;
}


int main() {
    int ano, bi; 

    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    bi = verifica(ano);
    
    if (bi == 1) {
		printf("%d", bi);
	}
    
    return 0;
}
