//3. Crie uma fun��o que receba tr�s lados de um tri�ngulo e verifique se esses lados
//formam um tri�ngulo v�lido. Um tri�ngulo � v�lido se a soma de dois de seus lados
//for sempre maior que o terceiro. Caso o tri�ngulo seja v�lido, a fun��o dever�
//retornar 1. Caso contr�rio, n�o deve retornar nada.



#include <stdio.h>


int tri (int a, int b, int c){
	if (a + b > c && b + c > a && c + a > b){
		return 1;
	}else
		return 0;
	
}

int main (){
	int n1, n2, n3, val;
	
	printf("Informe os 3 numeros para verificar se forma um triangulo :");
	scanf("%d", &n1);
	printf("Informe os 3 numeros para verificar se forma um triangulo :");
	scanf("%d", &n2);
	printf("Informe os 3 numeros para verificar se forma um triangulo :");
	scanf("%d", &n3);
	
	val = tri(n1,n2,n3);
	
	if(val == 1) {
	printf("\n %d", val);
	}
	return 0;
}

