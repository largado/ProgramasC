#include <stdio.h>

#define TENTATIVAS 5

//comentário de teste

int main () {
    printf("testes alex\n");
    double numero = 245;
    int numero1 = 42;
    int acertou = numero == numero1;
    printf("mostra o valor da variável na tela: %f \n", numero);
    int variavel;
    printf("valor da variavel antes do scanf %d\n", variavel);

    double pi = 3.141516;
    pi = pi * 2.4/1.3;
    printf("valor de pi após multiplica;áo: %.1f\n",pi);


    
    for (int i = 1; i <= TENTATIVAS; i++)
    {
    
        printf("digite seu número?\n");

        scanf("%d", &variavel);
        printf("vc digitou: %d \n", variavel);
        if(variavel < 0){
            printf("não use número negativo!\n");
            i--;

            continue;
        }

        int acertou2 = (variavel == numero);

        if(acertou2){
            printf("Äcertou\n");

            //sai do laço for
            break;

        }
        else {
            int resuld = variavel > numero;
            if(resuld){
                printf("seu chute foi maio que o número secreto\n");
            }

            if(variavel < numero){
                printf("seu chute foi menor que o número secreto\n");
            }
            printf("ërrou\n");
        }
        /* vai dar falha porque está fora do escopo

        printf("%d", resuld);

        */
    }

        
}