//8. Elabore uma fun��o que calcule o imposto sobre um sal�rio com base no valor
//recebido. Se o sal�rio for maior que R$ 5.000,00, o imposto ser� de 20%. Caso
//contr�rio, o imposto ser� de 10%. A fun��o deve exibir o valor do imposto a ser
//pago.


#include <stdio.h>


void imposto (float salario) {
	float m;
	if (salario > 5000){
		m = salario * 0.20;
		printf("O valor do imposto e de: %.2f", m);
		
	}else {
		m = salario * 0.10;
		printf("O valor do imposto e de: %2.f", m);
	}
}


float main () {
	
	float salario;
	
	printf("Informe o salario :");
	scanf("%f", &salario);
	
	imposto(salario);
	
	return 0;
}
