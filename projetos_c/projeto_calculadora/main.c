#include <stdio.h>
#include <math.h>

// Variável global para indicar erro
int erro = 0;

// Função para realizar operações básicas
void operacoes_basicas() {
    double num1, num2;
    char operacao;
    int opcao;

    do {
        printf("\nOperações básicas:\n");
        printf("1. Realizar operação\n");
        printf("2. Voltar ao menu principal\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
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
                    if (num1 == 0) {
                        printf("Erro: Divisão de zero não permitida!\n");
                        erro = 1;
                    } else if (num2 != 0) {
                        printf("Resultado: %.2lf\n", num1 / num2);
                    } else {
                        printf("Erro: Divisão por zero!\n");
                        erro = 1;
                    }
                    break;
                default:
                    printf("Operação inválida!\n");
                    erro = 1;
                    break;
            }
        } else if (opcao != 2) {
            printf("Opção inválida! Tente novamente.\n");
            erro = 1;
        }
    } while (opcao != 2);

    if (erro) {
        printf("Ocorreu um erro durante a operação. Retornando ao menu principal.\n");
        erro = 0;
    }
}

// Função para resolver equação de primeiro grau
void equacao_primeiro_grau() {
    double a, b;
    int opcao;

    do {
        printf("\nEquação de primeiro grau:\n");
        printf("1. Resolver equação\n");
        printf("2. Voltar ao menu principal\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
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
                erro = 1;
            }
        } else if (opcao != 2) {
            printf("Opção inválida! Tente novamente.\n");
            erro = 1;
        }
    } while (opcao != 2);

    if (erro) {
        printf("Ocorreu um erro durante a operação. Retornando ao menu principal.\n");
        erro = 0;
    }
}

// Função para resolver equação de segundo grau
void equacao_segundo_grau() {
    double a, b, c;
    double delta, raiz1, raiz2;
    int opcao;

    do {
        printf("\nEquação de segundo grau:\n");
        printf("1. Resolver equação\n");
        printf("2. Voltar ao menu principal\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Para a equação ax^2 + bx + c = 0\n");
            printf("Digite o valor de a: ");
            scanf("%lf", &a);
            printf("Digite o valor de b: ");
            scanf("%lf", &b);
            printf("Digite o valor de c: ");
            scanf("%lf", &c);

            if (a == 0) {
                printf("Não é uma equação de segundo grau!\n");
                erro = 1;
                continue;
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
        } else if (opcao != 2) {
            printf("Opção inválida! Tente novamente.\n");
            erro = 1;
        }
    } while (opcao != 2);

    if (erro) {
        printf("Ocorreu um erro durante a operação. Retornando ao menu principal.\n");
        erro = 0;
    }
}

// Função para calcular seno, cosseno, tangente, hipotenusa e catetos
void trigonometria() {
    int opcao;

    do {
        printf("\nTrigonometria:\n");
        printf("1. Calcular seno, cosseno e tangente\n");
        printf("2. Calcular hipotenusa\n");
        printf("3. Calcular cateto\n");
        printf("4. Voltar ao menu principal\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
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
                break;
            }
            case 2: {
                double cateto_oposto, cateto_adjacente;
                printf("Digite o valor do cateto oposto: ");
                scanf("%lf", &cateto_oposto);
                printf("Digite o valor do cateto adjacente: ");
                scanf("%lf", &cateto_adjacente);

                double hipotenusa = sqrt(pow(cateto_oposto, 2) + pow(cateto_adjacente, 2));
                printf("Hipotenusa: %.2lf\n", hipotenusa);
                break;
            }
            case 3: {
                double hip, cateto;
                printf("Digite o valor da hipotenusa: ");
                scanf("%lf", &hip);
                printf("Digite o valor de um dos catetos: ");
                scanf("%lf", &cateto);

                if (hip > cateto) {
                    double outro_cateto = sqrt(pow(hip, 2) - pow(cateto, 2));
                    printf("O outro cateto é: %.2lf\n", outro_cateto);
                } else {
                    printf("Erro: A hipotenusa deve ser maior que o cateto.\n");
                    erro = 1;
                }
                break;
            }
            case 4:
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                erro = 1;
                break;
        }
    } while (opcao != 4);

    if (erro) {
        printf("Ocorreu um erro durante a operação. Retornando ao menu principal.\n");
        erro = 0;
    }
}

// Função para calcular várias funções matemáticas
void calcular_funcoes() {
    int opcao;

    do {
        printf("\nFunções matemáticas:\n");
        printf("1. Exponencial (e^x)\n");
        printf("2. Logaritmo natural (ln x)\n");
        printf("3. Logaritmo base 10 (log10 x)\n");
        printf("4. Voltar ao menu principal\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            double valor;
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
                        erro = 1;
                    }
                    break;
                case 3:
                    if (valor > 0) {
                        printf("Logaritmo base 10: %.2lf\n", log10(valor));
                    } else {
                        printf("Erro: Logaritmo base 10 não definido para valores <= 0.\n");
                        erro = 1;
                    }
                    break;
            }
        } else if (opcao != 4) {
            printf("Opção inválida! Tente novamente.\n");
            erro = 1;
        }
    } while (opcao != 4);

    if (erro) {
        printf("Ocorreu um erro durante a operação. Retornando ao menu principal.\n");
        erro = 0;
    }
}

// Função para calcular áreas de várias formas geométricas
void calcular_areas() {
    int opcao;

    do {
        printf("\nCálculo de áreas:\n");
        printf("1. Área do quadrado\n");
        printf("2. Área do retângulo\n");
        printf("3. Área do triângulo\n");
        printf("4. Área do círculo\n");
        printf("5. Área do trapézio\n");
        printf("6. Voltar ao menu principal\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                double lado;
                printf("Digite o lado do quadrado: ");
                scanf("%lf", &lado);
                printf("Área do quadrado: %.2lf\n", lado * lado);
                break;
            }
            case 2: {
                double largura, altura;
                printf("Digite a largura do retângulo: ");
                scanf("%lf", &largura);
                printf("Digite a altura do retângulo: ");
                scanf("%lf", &altura);
                printf("Área do retângulo: %.2lf\n", largura * altura);
                break;
            }
            case 3: {
                double base, altura;
                printf("Digite a base do triângulo: ");
                scanf("%lf", &base);
                printf("Digite a altura do triângulo: ");
                scanf("%lf", &altura);
                printf("Área do triângulo: %.2lf\n", (base * altura) / 2);
                break;
            }
            case 4: {
                double raio;
                printf("Digite o raio do círculo: ");
                scanf("%lf", &raio);
                printf("Área do círculo: %.2lf\n", M_PI * raio * raio);
                break;
            }
            case 5: {
                double base_maior, base_menor, altura;
                printf("Digite a base maior do trapézio: ");
                scanf("%lf", &base_maior);
                printf("Digite a base menor do trapézio: ");
                scanf("%lf", &base_menor);
                printf("Digite a altura do trapézio: ");
                scanf("%lf", &altura);
                printf("Área do trapézio: %.2lf\n", ((base_maior + base_menor) * altura) / 2);
                break;
            }
            case 6:
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                erro = 1;
                break;
        }
    } while (opcao != 6);

    if (erro) {
        printf("Ocorreu um erro durante a operação. Retornando ao menu principal.\n");
        erro = 0;
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
        printf("6. Calcular áreas\n");
        printf("7. Sair\n");
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
                calcular_areas();
                break;
            case 7:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                erro = 1;
                break;
        }
    } while (escolha != 7);

    return 0;
}
