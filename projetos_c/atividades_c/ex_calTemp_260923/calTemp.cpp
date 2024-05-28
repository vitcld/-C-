#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* 
Escreva um algoritmo que solicite ao usuário que escolha o tipo de conversão de
temperatura (C>F, C>K, F>C, F>K, K>C, K>F) e apresente ao final o resultado
1) Celsius para Fahrenheit
2) Celsius para Kelvin
3) Fahrenheit para Cesius
4) Kelvin para Celsius
5) Kelvin para Fahrenheit
*/

void PerguntaSair() {
	char opcaoSair;
	printf("\nDeseja sair do programa? [S/N]: ");
	scanf(" %c", &opcaoSair);
	if (opcaoSair == 'S' || opcaoSair == 's') {
    	exit(0);
	}
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;
	while (opcao != 7) {
	printf("\n ------ ULTRA MEGA POWER IMENSO MELHOR ------");
	printf("\n |         CONVERSOR DE TEMPERATURA         |");
	printf("\n |                                          |");
	printf("\n |       1- Celsius     -> Fahrenheit       |");
	printf("\n |       2- Celsius     -> Kelvin           |");
	printf("\n |       3- Fahrenheit  -> Celsius          |");
	printf("\n |       4- Fahrenheit  -> Kelvin           |");
	printf("\n |       5- Kelvin      -> Celsius          |");
	printf("\n |       6- Kelvin      -> Fahrenheit       |");
	printf("\n |                                          |");
	printf("\n |                7- Sair                   |");
	printf("\n --------------------------------------------");
	
	float temp;
	printf("\nDigite uma das opções acima: ");
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1: {
			printf("Digite a teperatura em graus Celsius: ");
			scanf("%f", &temp);
			printf("\n --------------------------------------------");
			printf("\n |                                          |");
			printf("\n |   A temperatura em Fahrenheits = %.2f     ", (temp * 9/5) + 32);
			printf("\n |                                          |");
			printf("\n --------------------------------------------");
			PerguntaSair();
			break;
		}
		case 2: {
			printf("Digite a temperatura em graus Celsius: ");
			scanf("%f", &temp);
			printf("\n --------------------------------------------");
			printf("\n |                                          |");
			printf("\n |     A temperatura em Kelvin = %.2f      ", temp + 273.15);
			printf("\n |                                          |");
			printf("\n --------------------------------------------");
			PerguntaSair();
			break;
		}
		case 3: {
			printf("Digite a temperatura em graus Fahrenheit: ");
			scanf("%f", &temp);
			printf("\n --------------------------------------------");
			printf("\n |                                          |");
			printf("\n |    A temperatura em Celsius = %.2f      ", (temp - 32) * 5/9);
			printf("\n |                                          |");
			printf("\n --------------------------------------------");
			PerguntaSair();
			break;
		}
		case 4: {
			printf("Digite a temperatura em graus Fahrenheit: ");
			scanf("%f", &temp);
			printf("\n --------------------------------------------");
			printf("\n |                                          |");
			printf("\n |      A temperatura em Kelvin = %.2f       ", (temp - 32) * 5/9 + 273.15);
			printf("\n |                                          |");
			printf("\n --------------------------------------------");
			PerguntaSair();
			break;
		}
		case 5: {
			printf("Digite a temperatura em graus Kelvin: ");
			scanf("%f", &temp);
			printf("\n --------------------------------------------");
			printf("\n |                                          |");
			printf("\n |    A temperatura em Celsius = %.2f        ", temp - 273.15);
			printf("\n |                                          |");
			printf("\n --------------------------------------------");
			PerguntaSair();
			break;
		}
		case 6: {
			printf("Digite a teperatura em graus Kelvin: ");
			scanf("%f", &temp);
			printf("\n --------------------------------------------");
			printf("\n |                                          |");
			printf("\n |   A temperatura em Fahrenheits = %.2f     ", ((temp - 273.15) * 9/5) + 32);
			printf("\n |                                          |");
			printf("\n --------------------------------------------");
			PerguntaSair();
			break;
		}
		case 7: {
			printf("\n --------------------------------------------");
			printf("\n |                                          |");
			printf("\n |  Obrigado por utilizar o nosso programa  |");
			printf("\n |                                          |");
			printf("\n --------------------------------------------");	
			return 1;
			break;
		}
		default: {
			printf("\n --------------------------------------------");
			printf("\n |                                          |");
			printf("\n |    Nenhuma das opções foram escolhidas   |");
			printf("\n |                                          |");
			printf("\n --------------------------------------------");
			break;
		}
	}
}
	getchar();
    return 1;
}

