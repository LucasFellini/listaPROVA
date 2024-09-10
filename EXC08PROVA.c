//8. Elabore uma função que calcule o imposto sobre um salário com base no valor
//recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
//contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
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
