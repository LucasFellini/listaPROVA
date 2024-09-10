//10. Elabore uma funcao que receba o salario bruto de uma pessoa e calcule o valor
//da contribuicao ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
//aliquotas progressivas para calcular o valor da contribuicao:
//Åú Ate R$ 1.320,00: 7,5%
//Åú De R$ 1.320,01 ate R$ 2.571,29: 9%
//Åú De R$ 2.571,30 ate R$ 3.856,94: 12%
//Åú De R$ 3.856,95 ate R$ 7.507,49: 14%


#include<stdio.h>


float calcula (float salb) {
	float m;
	if(salb <= 1320){
		m = salb * 0.075;
	}else if (salb <=2571.29){
		m = salb * 0.09;
	}else if (salb <= 3856.94){
		m = salb * 0.12;
	}else{
		m= salb * 0.14;
}
	return m;
}



float main () {
	
	float salb, inss;
	
	printf("Informe o valor do salario bruto: ");
	scanf("%f", &salb);
	
	inss = calcula(salb);
	
	printf("O valor da contribuicao do INSS e de: %.2f", inss);
	
	
}
