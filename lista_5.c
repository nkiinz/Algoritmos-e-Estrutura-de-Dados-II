//1 – Faça um programa que calcula a soma de dois números e exibe o resultado na tela.

#include <stdio.h>

int main() {
    float numero1, numero2, soma;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    soma = numero1 + numero2;

    printf("A soma de %.2f e %.2f é: %.2f\n", numero1, numero2, soma);

    return 0;
}

//2 – Faça um programa que calcula a área de um retângulo, ou seja, o usuário digita o valor do lado X e o valor do lado Y do retângulo (tipo real), depois faça o
cálculo da área exiba o resultado na tela.

#include <stdio.h>

int main() {
    float ladoX, ladoY, area;

    printf("Digite o valor do lado X do retângulo: ");
    scanf("%f", &ladoX);

    printf("Digite o valor do lado Y do retângulo: ");
    scanf("%f", &ladoY);

    area = ladoX * ladoY;

    printf("A área do retângulo é: %.2f\n", area);

    return 0;
}

//3 - Faça uma função em C que receba como parâmetros dois valores reais e então calcule e retorne a média aritmética desses valores

#include <stdio.h>

float calcular_media(float valor1, float valor2) {
    return (valor1 + valor2) / 2;
}

int main() {
    float num1, num2, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    media = calcular_media(num1, num2);

    printf("A média aritmética de %.2f e %.2f é: %.2f\n", num1, num2, media);

    return 0;
}

//4 - Faça uma função em C que receba três parêmtros double: a, b e c associados aos coeficientes de um polinômio de 2 grau ax^2 + bx + c e então calcule e apresente na tela as raízes reais desse polinômio

#include <stdio.h>
#include <math.h>

void calcular_raizes(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        printf("O polinômio não possui raízes reais.\n");
    } else if (delta == 0) {
        double raiz = -b / (2 * a);
        printf("O polinômio possui uma raiz real: %.2lf\n", raiz);
    } else {
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("O polinômio possui duas raízes reais: %.2lf e %.2lf\n", raiz1, raiz2);
    }
}

int main() {
    double a, b, c;

    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);

    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    calcular_raizes(a, b, c);

    return 0;
}

//5 - Escreva um programa que implemente uma função que retorne a diferença entre dois números inteiros digitados pelo usuário.

#include <stdio.h>

int calcular_diferenca(int num1, int num2) {
    return num1 - num2;
}

int main() {
    int numero1, numero2, diferenca;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    diferenca = calcular_diferenca(numero1, numero2);

    printf("A diferença entre %d e %d é: %d\n", numero1, numero2, diferenca);

    return 0;
}

//6 - Escreva uma função que retorne o cubo do valor passado como argumento.

#include <stdio.h>

double calcular_cubo(double num) {
    return num * num * num;
}

int main() {
    double numero, cubo;

    printf("Digite um número: ");
    scanf("%lf", &numero);

    cubo = calcular_cubo(numero);

    printf("O cubo de %.2lf é: %.2lf\n", numero, cubo);

    return 0;
}

//7 - Defina um vetor para armazenar 100 nomes e 100 notas.

#include <stdio.h>

#define MAX 100
#define NAME_LENGTH 50

int main() {
    char nomes[MAX][NAME_LENGTH];
    float notas[MAX];

    // Exemplo de como preencher os vetores
    for (int i = 0; i < MAX; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Exemplo de como acessar e imprimir os valores armazenados nos vetores
    for (int i = 0; i < MAX; i++) {
        printf("Aluno %d: Nome: %s, Nota: %.2f\n", i + 1, nomes[i], notas[i]);
    }

    return 0;
}

//8 - Defina um vetor para armazenar 100 notas

#include <stdio.h>

#define MAX 100

int main() {
    float notas[MAX];

        for (int i = 0; i < MAX; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

        for (int i = 0; i < MAX; i++) {
        printf("Nota do aluno %d: %.2f\n", i + 1, notas[i]);
    }

    return 0;
}


//9 - Declare uma estrutura capaz de armazenar o número e 3 notas para um dado aluno.


#include <stdio.h>

#define MAX_NOTAS 3

// Definição da estrutura Aluno
struct Aluno {
    int numero;
    float notas[MAX_NOTAS];
};

int main() {
        struct Aluno aluno1;

    aluno1.numero = 1;
    aluno1.notas[0] = 8.5;
    aluno1.notas[1] = 7.2;
    aluno1.notas[2] = 9.0;
    
    printf("Número do aluno: %d\n", aluno1.numero);
    printf("Notas do aluno: %.2f, %.2f, %.2f\n", aluno1.notas[0], aluno1.notas[1], aluno1.notas[2]);

    return 0;
}


//10 Utilizando a estrutura abaixo, faça um programa para ler o número e as 3 notas de 10 alunos:

struct aluno {
	int num_aluno;
	float nota1, nota2, nota3
float media;
};


#include <stdio.h>

#define NUM_ALUNOS 10

// Definição da estrutura Aluno
struct Aluno {
    int num_aluno;
    float nota1, nota2, nota3;
    float media;
};

float calcular_media(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int main() {
    struct Aluno alunos[NUM_ALUNOS];

        for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite o número do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].num_aluno);

        printf("Digite as três notas do aluno %d: ", i + 1);
        scanf("%f %f %f", &alunos[i].nota1, &alunos[i].nota2, &alunos[i].nota3);

               alunos[i].media = calcular_media(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3);
    }

        printf("\nInformações dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", alunos[i].num_aluno);
        printf("  Nota 1: %.2f\n", alunos[i].nota1);
        printf("  Nota 2: %.2f\n", alunos[i].nota2);
        printf("  Nota 3: %.2f\n", alunos[i].nota3);
        printf("  Média: %.2f\n", alunos[i].media);
        printf("\n");
    }

    return 0;
}
