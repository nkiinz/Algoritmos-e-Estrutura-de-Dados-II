//1

#include <stdio.h>

int main() {
    float vetor[10], quadrados[10];

    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        quadrados[i] = vetor[i] * vetor[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("%f ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%f ", quadrados[i]);
    }
    printf("\n");

    return 0;
}

//2

#include <stdio.h>

int main() {
    float vetor[8];
    int x, y;
    float soma;

    for (int i = 0; i < 8; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%f", &vetor[i]);
    }

    printf("Digite a posição X (0 a 7): ");
    scanf("%d", &x);
    printf("Digite a posição Y (0 a 7): ");
    scanf("%d", &y);

    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posições %d e %d é: %f\n", x, y, soma);
    } else {
        printf("Posições inválidas! Certifique-se de que X e Y estejam entre 0 e 7.\n");
    }

    return 0;
}

//3

#include <stdio.h>

int main() {
    int vetor[10];
    int countPares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", countPares);

    return 0;
}

//4

#include <stdio.h>

int main() {
    int vetor[10];
    int maior, posicaoMaior;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    posicaoMaior = 0;

    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }

    printf("Vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O maior elemento é %d e está na posição %d.\n", maior, posicaoMaior);

    return 0;
}

//5

#include <stdio.h>

int main() {
    int vetor[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valores na ordem inversa: ");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

//6

#include <stdio.h>

int main() {
    float notas[15];
    float soma = 0;
    float media;

    for (int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 15;

    printf("A média geral das notas é: %.2f\n", media);

    return 0;
}

//7

#include <stdio.h>

int main() {
    float vetor[10];
    int countNegativos = 0;
    float somaPositivos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            countNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", countNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}

//8

#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais encontrados:\n");
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
            }
        }
    }

    return 0;
}

//9

#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("Vetor modificado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

//10

#include <stdio.h>

int main() {
    int matriz[4][4];
    int countMaioresQue10 = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                countMaioresQue10++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", countMaioresQue10);

    return 0;
}

//11

#include <stdio.h>

int main() {
    int matriz[5][5];

    // Preenchendo a matriz com 1 na diagonal principal e 0 nos demais elementos
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    // Escrevendo a matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//12

#include <stdio.h>

int main() {
    int matriz[4][4];
    int linha_maior, coluna_maior;
    int maior_valor;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    maior_valor = matriz[0][0];
    linha_maior = 0;
    coluna_maior = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor na matriz é %d e está na linha %d, coluna %d.\n", maior_valor, linha_maior, coluna_maior);

    return 0;
}
