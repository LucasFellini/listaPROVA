//11. Crie uma funcao que receba o valor de um produto e calcule o valor do desconto
//de ICMS com base nas faixas de preco do produto:
//Åú Ate R$ 1.000,00: Desconto de 5%
//Åú De R$ 1.000,01 ate R$ 5.000,00: Desconto de 10%
//Åú Acima de R$ 5.000,00: Desconto de 15%



#include<stdio.h>

	float desconto(float produto) {
		float m;
		if(produto <= 1000){
			m = produto * 0.05;
		}else if (produto <= 5000){
			m = produto * 0.10;
		}else{
			m = produto * 0.15;
	}
		return m;	
}


float main () {
	
	float produto, icms;
	
	printf("Informe o valor do produto: ");
	scanf("%f", &produto);
	
	
	icms = desconto(produto);
	
	printf("O valor do ICMS e de: %.2f", icms);
	
	return 0;
	
}
