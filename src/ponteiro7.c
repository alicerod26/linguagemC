#include <stdio.h>
#include<stdlib.h>

int main(){
    system("clear");

    char nome_completo[30];
    //Vamos usar uma função para obter todos os caracteres digitados pelo usúario na tela de terminal
    //O nome da função é fgets

    printf("Digite o seu nome completo e tecle Enter\n");
    fgets(nome_completo,30,stdin);
    printf("Olá, Sr.(a) %s\n",nome_completo);

    return 0;
    
}    