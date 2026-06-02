#include <stdio.h>
#include "../lib/funclayout.h"
#include "../lib/funcsoma.h"

int main(){
    int x , y , z;

    cabecalho();
    printf("Digite um númeo inteiro e tecle Enter\n");
    scanf("%d ,&X");
    printf("Digite outro número inteiro e tecle Enter");
    scanf("%d ,&y");
    z = soma(x,y);
    printf("O resulta da soma é %d\n",z);
    rodape();
    return 0;

}