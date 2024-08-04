#include <stdio.h>

int a = 3;
int *c;
 

int main(){

    //recurso de C para qual podemos guardar endereços, de alguma info armazenada na RAM
    //Vai ajudar a alocar as estruturas na memoria RAM dinamicamente
    //Para criarmos um ponteiro usamos o * e com ele podemos apontar para tal lugar 

    //La fora da main criamos uma variavel a
    // e um ponteiro c

    c = &a;
    //Isso diz que c recebe o ponteiro da variavel a.
    //Se imprimirmos ele vai aparecer o valor de "a"
    //Mas c não é == 3 ele aponta para "a" que é == 3

    //Logo quando printamos o ponteiro, na verdade printamos o valor da variavel em que o ponteiro esta apontando;
    //Acessamos o valor de "a", através do ponteiro "c" que aponta para o valor de "a"
    //"a" ja esta sendo alocado no inicio do programa
    //Ja o ponteiro "c" vai ser alocadas dinamicamente.
    //Vai ser alocada na heap

    

    return 0;
}