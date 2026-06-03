# Estudo da linguagem C
## Aplicada a lógica de programação e algoritmos
<p align="center">
    <img src="img/logoC.jpg" width="500" height="500">
</p>

---

Estudo das principais estruturas da limguagem de programação C.

Vamos listar os itens trabalhados neste repositório:

    * Variáveis
    * Comandos de Entrada e Saída (IO-input output):
        * printf
        * scanf
    * Desvio de fluxo Simples (if ... )
    * Desvio de fluxo de  Multiplo (if ... else ...)
    * Estrutura de Repetição While (Enquanto)
    * Estruta de Repetição For (Para)
    * Função (Módulos)
        - Função Interna (Dentro do arquivo .c)
        - Função Externa (Dentro do arquivo .h)
    * Importação de Módulos
        - Módulos de linguagem (stdio.h)
        -Módulos de usúario (funcoes.h)
    *Ponteiro
    *Criação de arquivos

#### Demonstração de uma estrutura simples de arquivo .c

```  c
#include <stdio.h>
int main(){
    int x = 10;
    printf("O valor é %d\n",x);
    return 0;
}
```

### Demonstração de fluxo Multiplo de arquivo .c

``` c
#include <stdio.h>

int main (){
    int n;
    printf("Digite um número inteiro e tecle Enter\n");
    scanf("%d",&n);

    if( n % 2 == 0 ) {
        printf("O número %d é Par\n",n);
    }

    return 0;

}
``` 

### Estrutura de Repetição For de arquivo .c
``` c
#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int ano;
    int qtd = 0;

    for( ano = 1950 ; ano <= 2026 ; ano++){
        if( ano % 4 == 0 ){
            printf("O ano %d é bissexto\n",ano);
            qtd++;
        }
    }
    printf("======================================\n");
    printf("A quantidade de anos bissextos é %d\n",qtd);
    return 0;
}
```

