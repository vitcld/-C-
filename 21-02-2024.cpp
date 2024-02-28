#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("Seu IMC é: %.2f", imc);
    if (imc < 20)
     printf(" (Abaixo do peso).");
  else if ((imc >= 20) && (imc < 25))
          printf(" (Peso normal).");
       else if ((imc >= 25) && (imc < 30))
               printf(" (Acima do peso).");
            else if ((imc >= 30) && (imc < 34))
                    printf(" (Obesidade).");
		 else
		    printf(" (Muito Obeso).");
}
