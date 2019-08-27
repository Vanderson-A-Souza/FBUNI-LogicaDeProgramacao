#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
// Inicio do programa

	// Declaração de variavel
	float nota1, nota2, media;
	
	//Recebendo o valor de nota1.
	printf("Nota 1: ");
	scanf("%f", &nota1);
	
	//Recebendo o valor de nota2.
	printf("Nota 2: ");
	scanf("%f", &nota2);
	
	//Calculando uma media ponderada, media = nota1 == 40% + nota2 == 60%
	media = nota1*0.4 + nota2*0.6;
	printf("Media: %.1f", media);
	
// Fim do programa
	return 0;
}
