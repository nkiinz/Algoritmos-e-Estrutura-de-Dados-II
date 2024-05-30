//1

#include <stdio.h>
#include <math.h>

int main() {
    float numeros[10], quadrados[10];
    
    printf("Digite 10 números reais:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &numeros[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        quadrados[i] = pow(numeros[i], 2);
    }
    
    printf("\nVetor de números reais:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
    
    printf("\n\nVetor dos quadrados dos números:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", quadrados[i]);
    }
    
    printf("\n");
    
    return 0;
}

//2

#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;
    
    printf("Digite 8 números inteiros para preencher o vetor:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite dois valores X e Y correspondentes a duas posições no vetor (de 0 a 7):\n");
    scanf("%d %d", &x, &y);
    
    if(x >= 0 && x < 8 && y >= 0 && y < 8) {
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posições %d e %d é: %d\n", x, y, soma);
    } else {
        printf("Posições inválidas!\n");
    }
    
    return 0;
}


//3

#include <stdio.h>

int main() {
    int vetor[10];
    int pares = 0;
    
    printf("Digite 10 números inteiros para preencher o vetor:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            pares++;
        }
    }
    
    printf("O vetor possui %d valores pares.\n", pares);
    
    return 0;
}

//4

#include <stdio.h>

int main() {
    int vetor[10];
    int maior, posicao;

    
    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

       maior = vetor[0];
    posicao = 0;

    
    for(int i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

       printf("Vetor digitado:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

   
    printf("O maior elemento é: %d\n", maior);
    printf("Ele está na posição: %d\n", posicao);

    return 0;
}

//5

#include <stdio.h>

int main() {
    int valores[6];

    printf("Digite 6 números inteiros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Valores na ordem inversa:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}


//6

#include <stdio.h>

int main() {
    float notas[15];
    float soma = 0, media;

    printf("Digite as notas dos 15 alunos:\n");
    for(int i = 0; i < 15; i++) {
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
    int negativos = 0;
    float soma_positivos = 0;

    printf("Digite 10 números reais:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
        if(vetor[i] < 0) {
            negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f\n", soma_positivos);

    return 0;
}

//8

#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais no vetor:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
                break;
            }
        }
    }

    return 0;
}

//9

#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

        for(int i = 0; i < 10; i++) {
        if(vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("Vetor modificado:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

//10

#include <stdio.h>

int main() {
    int matriz[4][4];
    int contador = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}

//11

#include <stdio.h>

int main() {
    int matriz[5][5];

        for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }

        for(int i = 0; i < 5; i++) {
        matriz[i][i] = 1;
    }

        printf("Matriz resultante:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
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
    int linha_maior = 0, coluna_maior = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > matriz[linha_maior][coluna_maior]) {
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("Matriz 4x4:\n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor está na linha %d e coluna %d.\n", linha_maior, coluna_maior);

    return 0;
}
