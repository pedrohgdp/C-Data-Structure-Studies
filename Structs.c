//A partir da struct "criamos" novos tipos de dados, novas estruturas, onde vamos armazenar mais info
//E depois criar as estrutura de dados, com locação logica e fisica
#include <stdio.h>

//Structs conseguem agrupar determinados tipos de dados dentro de uma estrutura.
//Um exemplo de struct é quando queremos armazenar coisas de uma pessoa
//A gente tem int, float, mas seria dificil representar pessoas
//Então fora da main vamos criar uma struct chamada pessoa.
//Com structs que vamos criar nossas estrutura de dados, e alocar ela dinamicamente em runtime

struct pessoa
{
    int idade;
    int peso;
    float altura;
};
//É como se tivessemos criados um nova estrutura de dados, uma nova variavel.
//No caso a gente tem uma variavel pessoa. Que dentro dela tem tais elementos

typedef struct pessoa Pessoa;
//Com typedef ele redefine nomes dos tipos de dados 
//Ou seja o comando "struct pessoa" pode ser representado só por "Pessoa"


int main(){

    //Já criada a gente vai fazer uma instancia para atribuir valores
    
    struct pessoa pedro;
    //Assim criei uma variavel pessoa, usando a struct como "tipo"
    
    pedro.idade = 20;
    pedro.peso = 71;

    //Aqui atribui a idade dentro da variavel pedro a 20. É como se eu tivesse uma variavel pedro e dentro dessa varivael
    //tivesse outras pequenas variaveis

    printf("%d", pedro.idade);

    //Então a struct pessoa é como se fosse o tipo de dado pessoa, contem tudo que temos para representar uma pessoa.

    return 0;
}

