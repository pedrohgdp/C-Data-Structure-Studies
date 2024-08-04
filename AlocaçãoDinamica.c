#include <stdio.h>
#include <stdlib.h>

//Imagina que a gente queira guardar uma quantidade de pontos em um plano 2d
//E a gente não sabe a quantidade.
//a gente cria uma struct com ponto x e y

struct ponto
{
    int x;
    int y;
    //Essas são as duas cordenadas
};

//Nomeamos a struct para ponto
typedef struct ponto Ponto;


int main(){
    //Para botar valor nas ultimas aulas a gente criava uma variavel p com Ponto e dava p.x = 1 por exemplo
    //Para criar em runtime, vamos trabalhar com ponteiros, para ter a alocação dinamica.

    //para criarmos um ponteiro que aponta para uma estrutura alocada dinamicamente do tipo Ponto, fazemos.

    Ponto *p = (Ponto*) malloc(sizeof(Ponto)/*entre parenteses do malloc botamos o tamanho a alocar, para isso usamos sizeof*/);
    //maloc vai alocar dinamicamente um espaço na memoria 
    //botamos no size of um ponto, por que queremos alocar um ponto
    //O (Ponto*) é a conversão de ponto para ponteiro

    //agora para botarmos valor em x e y usamos

    p ->x = 3;
    p ->y = 5;

    //O que acontece é basicamente:

    /*Quando o programa iniciar não vai ter nenhuma alocação x nem y
    quando o programa chegar nessa parte ele vai criar um x e um y em um lugar aleatorio para qual p aponta
    Quando passar dessa parte, e for usada o que precisa ser usada
    ele vai desalocar esses valor liberando o espaço para futuras alocações
    Essa é a alocação dinamioca.*/


    //Para printar usamos 

    printf("%d", p->x);

    return 0;
}