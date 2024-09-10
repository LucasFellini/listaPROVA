//2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
//bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
//divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
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
