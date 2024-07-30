#include <stdio.h>

int main(){

    printf("Hello World!\n");
    //Variables 
    //Tipos ( Int | Float | Double | char |  )
    //%f amostra float | %d inteiro 
    //Podemos declarar fora da main e ela vai ser uma variavel global
    //Antes de f no %f podemos botar . e a quantidade de casas 

    int a = 3;
    printf("O numero de a é: %d\n", a);

    //Ler o que é digitado no teclado

    int num;
    printf("\nDigite um numero");
    scanf("%d", &num);
    //O & indica o endereço da variavel num na memória ram
    printf("O numero digitado é %d\n",num);

    //Estruturas condicionais

    //A estrutura é if(teste){
        //Codigo
    //}
    //Podemos botar if e else em cascata

    //&& É o operador And
    // || é o operador or
    //! Not ( negação )
    //Função ajuda a organizar o codigo e subdividir ele

    //VETOREs/ARRAYS

    //Para definir um vetor / array botamos entre colchetes o numero de casas/posições ele vai ter

    int vetor[4];

    //Para pormos valor podemos por

    vetor[0] = 23;
    vetor[1] = 10;
    vetor[2] = 5;
    vetor[3] = 10;

    //Para dgitar o numero que queremos botar de jeito mais facil podemos usar o for
    //A cada numero do for a gente scan algo digitado

    //Matrizes é a mesma coisa que vetor, mas com mais dimensão, geralmente 2
    //Matriz eu ja aprendi 

    int matriz[3][3]; //Aqui criei uma matriz de 3 colunas e 3 linha, ou melhor 3 linhas e 3 colunas
    //Mesma notação da matematica Xnxm
    //Onde n é linhas e m colunas
    //Para prencher podemos ir por indice que nem no exemplo de vetor
    //Ou com duplo for um para linha outro para coluna
    //Sendo o primeiro for == 0 significa que estamos na primeira linha
    //o segundo for anda da coluna 0 até a coluna 3, etc...

    return 0;
}