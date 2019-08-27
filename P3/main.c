#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
// Inicio do Programa
	
	//Declaração de vaviavel
	float cocada, qqueixo, valorTotal;
	int qtCocada, qtQqueixo;
	===     === 	    ===		 ====    ==
	 ==     ==	   == ==	 == ==   ==
	  ==   ==	  ==   ==	 ==  ==  == 
	   == ==	 =========	 ==   == ==
	    ===		===     ===  	 ==   =====
	//Recebendo valores para cocada.
	printf("Preco cocada: R$");
	scanf("%f", &cocada);
	printf("Quantidade: ");
	scanf("%d", &qtCocada);
	//Recebendo valores para o quebra-queixo.
	printf("Preco quebra-queixo: R$");
	scanf("%f", &qqueixo);
	printf("Quantidade: ");
	scanf("%d", &qtQqueixo);
	
	//Calculando o valor total a ser pago.
	valorTotal = cocada*qtCocada + qqueixo*qtQqueixo;
	printf("Total a pagar: R$%.2f", valorTotal);
	
	return 0;
}
