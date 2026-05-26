/*O programa deve receber 4 notas, realizar o cálculo da média e verificar se:
    -A nota média for maior ou igual a 7, o aluno estará Aprovado; caso contrário estará Reprovado*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota1, nota2, nota3, nota4;
    
    // Comando System chama uma execução do sistema operacial
    // que, neste caso será o comando clear

    system("clear");

    printf("Digite a primeira nota e tecle Enter\n");
    scanf("%d",&nota1);

    printf("Digite a primeira nota e tecle Enter\n");
    scanf("%d",&nota2);

    printf("Digite a primeira nota e tecle Enter\n");
    scanf("%d",&nota3);

    printf("Digite a primeira nota e tecle Enter\n");
    scanf("%d",&nota4);

    int media = nota1 + nota2 + nota3 + nota4;

    if (media / 4 >= 7){ 
        printf("Aprovado\n");
    }

    else{
        printf("Reprovado\n");
    }
    
    printf("\n########################################\n");
    printf("Endereço de memória da variável nota1 %p \n", &nota1);
    printf("Endereço de memória da variável nota2 %p \n", &nota2);
    printf("Endereço de memória da variável nota3 %p \n", &nota3);
    printf("Endereço de memória da variável nota4 %p \n", &nota4);
    printf("Endereço de memória da variável media %p \n", &media);
    
    return 0;
}
