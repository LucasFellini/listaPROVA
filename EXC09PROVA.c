//9) Crie uma funcao que receba o salario bruto de uma pessoa e calcule o valor do
//Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
//Utilize as aliquotas e deducoes conforme a tabela abaixo:
//œ Ate R$ 2.112,00: Isento
//œ De R$ 2.112,01 ate R$ 2.826,65: Aliquota de 7,5% (deducao de R$ 158,40)
//œ De R$ 2.826,66 ate R$ 3.751,05: Aliquota de 15% (deducao de R$ 370,40)
//œ De R$ 3.751,06 ate R$ 4.664,68: Aliquota de 22,5% (deducao de R$ 651,73)
//œ Acima de R$ 4.664,68: Aliquota de 27,5% (deducao de R$ 884,96)
//Use a estrutura condicional aninhada para calcular o imposto corretamente.



#include<stdio.h>

float calcula (float salario) {
	float m;
	if (salario <= 2112){
		m = 0.0;
	}else if (salario <= 2826.65){
		m = (salario * 0.075)-158.40;
	}else if (salario <= 3751.05){
		m = (salario * 0.15)-370.40;
	}else if (salario <= 4664.68){
		m = (salario * 0.225)-651.73;
	}else {
		m = (salario * 0.275)-884.96;
	}
	return m;
	
}

float main () {
	
	float salario, imposto;
	
	printf("Informe o valor do salario: ");
	scanf("%f", &salario);
	
	imposto = calcula(salario);
	
	printf("O valor do imposto retido e de: %.2f", imposto);
	
	
	return 0;
}


