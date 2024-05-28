#include <stdio.h>
#include <math.h>

// Função para realizar operações básicas
void operacoes_basicas() {
    double num1, num2;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2lf\n", num1 / num2);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
            break;
    }
}

// Função para resolver equação de segundo grau
void equacao_segundo_grau() {
    double a, b, c;
    double delta, raiz1, raiz2;

    printf("Para a equação ax^2 + bx + c = 0\n");
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Não é uma equação de segundo grau!\n");
        return;
    }

    delta = b * b - 4 * a * c;
    if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são reais e diferentes.\n");
        printf("Raiz 1: %.2lf\n", raiz1);
        printf("Raiz 2: %.2lf\n", raiz2);
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("A raiz é real e única.\n");
        printf("Raiz: %.2lf\n", raiz1);
    } else {
        printf("As raízes são complexas e diferentes.\n");
        printf("Raiz 1: %.2lf + %.2lfi\n", -b / (2 * a), sqrt(-delta) / (2 * a));
        printf("Raiz 2: %.2lf - %.2lfi\n", -b / (2 * a), sqrt(-delta) / (2 * a));
    }
}

int main() {
    int escolha;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Operações básicas\n");
        printf("2. Equação de segundo grau\n");
        printf("3. Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                operacoes_basicas();
                break;
            case 2:
                equacao_segundo_grau();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (escolha != 3);

    return 0;
}