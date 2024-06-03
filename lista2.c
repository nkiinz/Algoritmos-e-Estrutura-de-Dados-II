//1

#include <stdio.h>

int triangulo(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    } else {
        return 0;
    }
}

int equilatero(int a, int b, int c) {
    if (a == b && b == c) {
        return 1;
    } else {
        return 0;
    }
}

int isosceles(int a, int b, int c) {
    if(a == b || b == c || a == c) {
        return 1;
    } else {
        return 0;
    }
}

int escaleno(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b, c;

    printf("Coloque três lados de um triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (triangulo(a, b, c)) {
        if (equilatero(a, b, c)) {
            printf("O triângulo é equilátero.\n");
        } else if (isosceles(a, b, c)) {
            printf("O triângulo é isósceles.\n");
        } else if (escaleno(a, b, c)) {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Os três lados não formam um triângulo.\n");
    }
    return 0;
}

//2

#include <stdio.h>

int mdc(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("O MMC de %d e %d é: %d\n", num1, num2, mmc(num1, num2));

    return 0;
}

//3

#include <stdio.h>

int primo(int num);
int somaPrimos(int n);

int main() {
    int n;
    
    printf("Digite a quantidade de números primos que deseja somar: ");
    scanf("%d", &n);
   
    printf("A soma dos primeiros %d números primos é: %d\n", n, somaPrimos(n));

    return 0;
}

int primo(int num) {
    if (num <= 1) return 0; 
    if (num <= 3) return 1; 
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }

    return 1; 
}

int somaPrimos(int n) {
    int soma = 0;
    int num = 2; 

    while (n > 0) {
        if (primo(num)) {
            soma += num;
            n--;
        }
        num++;
    }

    return soma;
}

//4

#include <stdio.h>

float mediaTurma(int numAlunos);
float mediaEscola(int numTurmas);

int main() {
    int numTurmas;

    printf("Digite o número de turmas na escola: ");
    scanf("%d", &numTurmas);


    printf("A média geral da escola é: %.2f\n", mediaEscola(numTurmas));

    return 0;
}

float mediaTurma(int numAlunos) {
    float soma = 0;
    float nota;

    printf("Digite as notas dos %d alunos:\n", numAlunos);

    for (int i = 0; i < numAlunos; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    return soma / numAlunos;
}

float mediaEscola(int numTurmas) {
    float soma = 0;

    for (int i = 0; i < numTurmas; i++) {
        int numAlunos;
        printf("\nTurma %d:\n", i + 1);
        printf("Digite o número de alunos na turma: ");
        scanf("%d", &numAlunos);
        soma += mediaTurma(numAlunos);
    }

    return soma / numTurmas;
}

//5

#include <stdio.h>

// Protótipo da função
int fibonacci(int n);

int main() {
    int n;
    
    printf("Digite o valor de n para calcular o n-ésimo termo da série de Fibonacci: ");
    scanf("%d", &n);

    printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, fibonacci(n));

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) // Casos base: F(0) = 0 e F(1) = 1
        return n;

    int termo_atual = 1;
    int termo_anterior = 0;

    for (int i = 2; i <= n; i++) {
        int proximo_termo = termo_atual + termo_anterior;
        termo_anterior = termo_atual;
        termo_atual = proximo_termo;
    }

    return termo_atual;
}

//6

#include <stdio.h>


void rotacao(int *num1, int *num2, int *num3) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = temp;
}

int main() {
    int num1, num2, num3;

    printf("Digite três números para a rotação: ");
    scanf("%d %d %d", &num1, &num2, &num3);

  
    printf("Números antes da rotação: %d, %d, %d\n", num1, num2, num3);

    rotacao(&num1, &num2, &num3);

  
    printf("Números depois da rotação: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

//8

#include <stdio.h>

#define SIZE 5

void primeiroTriangulo(int matriz[SIZE][SIZE]) {
    printf("Primeiro Triângulo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void segundoTriangulo(int matriz[SIZE][SIZE]) {
    printf("\nSegundo Triângulo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = SIZE - 1; j >= i; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void terceiroTriangulo(int matriz[SIZE][SIZE]) {
    printf("\nTerceiro Triângulo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < i; j++) {
            printf("  "); // Espaços para formatar o triângulo
        }
        for (int j = i; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void quartoTriangulo(int matriz[SIZE][SIZE]) {
    printf("\nQuarto Triângulo:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            printf("  "); // Espaços para formatar o triângulo
        }
        for (int j = SIZE - i - 1; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

  
    primeiroTriangulo(matriz);
    segundoTriangulo(matriz);
    terceiroTriangulo(matriz);
    quartoTriangulo(matriz);

    return 0;
}

//9

#include <stdio.h>

int menorEntreTres(int num1, int num2, int num3) {
    int menor = num1;

    if (num2 < menor)
        menor = num2;
    if (num3 < menor)
        menor = num3;

    return menor;
}

int main() {
    int num1, num2, num3;

    printf("Digite três números separados por espaços: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int menor = menorEntreTres(num1, num2, num3);

    printf("O menor dos três números é: %d\n", menor);

    return 0;
}

//10

#include <stdio.h>

int maiorEntreTres(int num1, int num2, int num3) {
    int maior = num1;

    if (num2 > maior)
        maior = num2;
    if (num3 > maior)
        maior = num3;

    return maior;
}

int main() {
    int num1, num2, num3;

  
    printf("Digite três números separados por espaços: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = maiorEntreTres(num1, num2, num3);

    printf("O maior dos três números é: %d\n", maior);

    return 0;
}

//11

#include <stdio.h>

int maximo(int num1, int num2, int num3, int *menor) {
    int maior = num1;

    if (num2 > maior)
        maior = num2;
    if (num3 > maior)
        maior = num3;

   
    *menor = num1;
    if (num2 < *menor)
        *menor = num2;
    if (num3 < *menor)
        *menor = num3;

    return maior;
}

int main() {
    int num1, num2, num3, menor;

    printf("Digite três números separados por espaços: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = maximo(num1, num2, num3, &menor);

    printf("O maior dos três números é: %d\n", maior);
    printf("O menor dos três números é: %d\n", menor);

    return 0;
}

//12

#include <stdio.h>


int soma(int num1, int num2);

int main() {
    int num1, num2;

    printf("Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    int resultado = soma(num1, num2);

    printf("A soma de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}

int soma(int num1, int num2) {
    return num1 + num2;
}

//13

#include <stdio.h>

int maior(int num1, int num2);

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    int maior_numero = maior(num1, num2);

    printf("O maior número entre %d e %d é: %d\n", num1, num2, maior_numero);

    return 0;
}

int maior(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}
