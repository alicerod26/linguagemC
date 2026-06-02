#include<stdio.h>
#include<stdlib.h>

int main (){
    //Vamos criar uma variável do tipo inteiro que guarda o valor 35

    int a = 35;
    int *pa = &a;
    printf("O valor da variável a é %d\n",a);
    printf("O endereço de memória da variável a é %p\n",pa);
    printf("O valor que está no endereço de memória da variável a é %d\n",*pa);

    return 0;

}