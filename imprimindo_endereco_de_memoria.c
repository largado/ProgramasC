#include <stdio.h>

void funcao1() {
    int variavel = 15;
    printf("imprime variavel %d ", &variavel);
    
}

int main (){
    // faz a chamada da funcao
    funcao1();
    
    printf("\n");
    int variavel = 15;
    printf("imprime variavel %d ", &variavel);
}