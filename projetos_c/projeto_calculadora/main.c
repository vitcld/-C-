#include <stdio.h>
#include <math.h>

// Função para realizar operações básicas
void operacoes_basicas() {
    double num1, num2;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);  // Note the space before %c to consume any leftover newline character
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

// Função para resolver equação de primeiro grau
void equacao_primeiro_grau() {
    double a, b;
    printf("Para a equação ax + b = 0\n");
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    if (a != 0) {
        double x = -b / a;
        printf("A solução é: x = %.2lf\n", x);
    } else {
        if (b == 0) {
            printf("A equação tem infinitas soluções.\n");
        } else {
            printf("A equação não tem solução.\n");
        }
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

// Função para calcular seno, cosseno e tangente
void trigonometria() {
    double angulo;
    printf("Digite o ângulo em graus: ");
    scanf("%lf", &angulo);

    // Convertendo o ângulo de graus para radianos
    double radiano = angulo * (M_PI / 180.0);

    // Calculando seno, cosseno e tangente
    double seno = sin(radiano);
    double cosseno = cos(radiano);
    double tangente = tan(radiano);

    printf("Seno: %.2lf\n", seno);
    printf("Cosseno: %.2lf\n", cosseno);
    printf("Tangente: %.2lf\n", tangente);
}

// Função para calcular várias funções matemáticas
void calcular_funcoes() {
    int opcao;
    double valor;

    printf("\nEscolha a função que deseja calcular:\n");
    printf("1. Exponencial (e^x)\n");
    printf("2. Logaritmo natural (ln x)\n");
    printf("3. Logaritmo base 10 (log10 x)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor de x: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            printf("Exponencial: %.2lf\n", exp(valor));
            break;
        case 2:
            if (valor > 0) {
                printf("Logaritmo natural: %.2lf\n", log(valor));
            } else {
                printf("Erro: Logaritmo natural não definido para valores <= 0.\n");
            }
            break;
        case 3:
            if (valor > 0) {
                printf("Logaritmo base 10: %.2lf\n", log10(valor));
            } else {
                printf("Erro: Logaritmo base 10 não definido para valores <= 0.\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    int escolha;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Operações básicas\n");
        printf("2. Equação de primeiro grau\n");
        printf("3. Equação de segundo grau\n");
        printf("4. Trigonometria\n");
        printf("5. Funções\n");
        printf("6. Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                operacoes_basicas();
                break;
            case 2:
                equacao_primeiro_grau();
                break;
            case 3:
                equacao_segundo_grau();
                break;
            case 4:
                trigonometria();
                break;
            case 5:
                calcular_funcoes();
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (escolha != 6);

    return 0;
}
