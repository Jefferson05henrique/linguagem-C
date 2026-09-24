#include <stdio.h>

void salario(void) // void = funcao que nao retorna nenhum valor
{
    printf("Ola mundo\n");

    float salario = 2500.50;
    printf("Salario: %.2f\n", salario);
}

void retangulo(void)
{
    int base, altura, area;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite a altura: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A area do retangulo e: %d\n", area);
}

void idade(void) {
    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 60) {
        printf("i tu é adulto é.\n");
    } else if (idade < 18) {  // else if = senao se, usado para verificar outra condicao caso a primeira seja falsa
        printf("i tu é crianca.\n");
    } else {
        printf("i tu é idoso.\n");
    }
}

void ola(void) {
    char dizer[] = "ola";   // declaracao de uma string chamada "dizer" com o valor "ola"

    for (int i = 0; i < 5; i++) {  // loop que se repete 5 vezes, imprimindo a string "ola" a cada iteracao
        printf("%s\n", dizer);
    }
}

void ads(void) {
    int i = 0;

    while (i < 5) {  // loop que se repete enquanto a variavel i for menor que 5
        printf("ads\n");
        i++;  // incrementa a variavel i em 1 a cada iteracao
    }
}

void corinthias(void) {
    int i = 0;   // declaracao de uma variavel inteira chamada "i" com valor inicial 0
    char dizer[] = "corinthias"; // declaracao de uma string chamada "dizer" com o valor "corinthias"

    do  // loop que se repete enquanto a variavel i for menor que 5
    {
        printf("%s\n", dizer);
        i++;  // incrementa a variavel i em 1 a cada iteracao
    }
    while (i < 5);  // condicao do loop, que verifica se a variavel i ainda é menor que 5
}

void contador(void) {
    int i; 
    int cont = 0; 

    for(i = 0; i < 5; i++) // loop que se repete 5 vezes, incrementando a variavel cont a cada iteracao
    {
        cont++; // incrementa a variavel cont em 1 a cada iteracao do loop
    }
    printf("Contador: %d\n", cont); // imprime na tela o valor final da variavel cont, que sera 5 apos o loop terminar
}

void vetores(void) {
    int vetor[5]; // declaracao de um vetor de 5 elementos do tipo inteiro

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    printf("qual Vetor você quer ver? (0 a 4): ");
    scanf("%d", &vetor[0]); // le o valor digitado pelo usuario e armazena na primeira posicao do vetor

    printf("O valor do vetor na posicao %d e: %d\n", vetor[0], vetor[vetor[0]]); // imprime na tela o valor do vetor na posicao digitada pelo usuario
}

void vetores2(void) {
    int i;
    int vetor[5] = {10, 20, 30, 40, 50}; // declaracao de um vetor de 5 elementos do tipo inteiro
    int soma = 0; // declaracao de uma variavel inteira chamada "soma" com valor inicial 0

    for (i = 0; i < 5; i++) // loop que se repete 5 vezes, solicitando ao usuario que digite um valor para cada posicao do vetor
    {
        soma += vetor[i]; // soma os valores digitados pelo usuario e armazena na variavel soma
    }

    printf("%d\n", vetor[i]); // imprime na tela o valor digitado pelo usuario para a posicao i do vetor
}
 
int main(void)
{
    int opcao;

    printf("Digite 0 para Salario\n");
    printf("Digite 1 para Retangulo\n");
    printf("Digite 2 para Idade\n");
    printf("Digite 3 para Ola\n");
    printf("Digite 4 para Ads\n");
    printf("Digite 5 para Corinthias\n");
    printf("Digite 6 para Contador\n");
    printf("Digite 7 para Vetores\n");
    printf("Digite 8 para Vetores2\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao == 0)
    {
        salario();
    }
    else if (opcao == 1)
    {
        retangulo();
    }
    else if (opcao == 2)
    {
        idade();
    }
    else if (opcao == 3)
    {
        ola();
    }
    else if (opcao == 4)
    {
        ads();
    }
    else if (opcao == 5)    
    {
        corinthias();
    }
    else if (opcao == 6)    
    {
        contador();
    } 
    else if (opcao == 7)    
    {
        vetores();
    }
    else if (opcao == 8)
    {
        vetores2();
    }
    else
    {
        printf("Opcao invalida.\n");
    }

    return 0;
}
// #include <stdio.h>> -> biblioteca padrao de entrada e saida

// int main(void)  -> funcao principal do programa
// {
// int base, altura, area;   -> declaracao de variaveis do tipo inteiro

// printf("Digite a base: ", base); -> solicita ao usuario que digite a base do retangulo

// scanf("%d", &base);  -> le a base digitada pelo usuario e armazena na variavel base

// printf("Digite a altura: ", altura);  -> solicita ao usuario que digite a altura do retangulo

// scanf("%d", &altura);  -> le a altura digitada pelo usuario e armazena na variavel altura

// area = base * altura; -> calcula a area do retangulo multiplicando a base pela altura e armazenando o resultado na variavel area

// printf("A area do retangulo e: %d\n", area); -> imprime na tela a area do retangulo calculada

// return 0;  -> indica que o programa terminou com sucesso
// }

// este codigo calcula a area de um retangulo, solicitando ao usuario a base e a altura do mesmo.

