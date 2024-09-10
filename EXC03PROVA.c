//3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
//formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
//for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
//retornar 1. Caso contrário, não deve retornar nada.



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

