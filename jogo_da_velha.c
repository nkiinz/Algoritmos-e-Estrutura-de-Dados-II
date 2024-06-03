#include <stdio.h>

// Função para inicializar o tabuleiro vazio
void inicializarTabuleiro(char tabuleiro[3][3]) {
	for (int x = 0; x < 3; x++) {
    	for (int y = 0; y < 3; y++) {
        	tabuleiro[x][y] = ' ';
    	}
	}
}

// Função para imprimir o tabuleiro
void imprimirTabuleiro(char tabuleiro[3][3]) {
	printf("  1 2 3\n");
	for (int x = 0; x < 3; x++) {
    	printf("%c ", 'A' + x);
    	for (int y = 0; y < 3; y++) {
        	printf("%c", tabuleiro[x][y]);
        	if (y < 2) printf("|");
    	}
    	printf("\n");
    	if (x < 2) printf("  -----\n");
	}
}

// Verificar se um jogador ganhou
char verificarVitoria(char tabuleiro[3][3]) {
	// Verifica linhas
	for (int x = 0; x < 3; x++) {
    	if (tabuleiro[x][0] == tabuleiro[x][1] && tabuleiro[x][1] == tabuleiro[x][2] && tabuleiro[x][0] != ' ') {
        	return tabuleiro[x][0];
    	}
	}
	// Verifica colunas
	for (int y = 0; y < 3; y++) {
    	if (tabuleiro[0][y] == tabuleiro[1][y] && tabuleiro[1][y] == tabuleiro[2][y] && tabuleiro[0][y] != ' ') {
        	return tabuleiro[0][y];
    	}
	}
	// Verifica diagonais
	if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') {
    	return tabuleiro[0][0];
	}
	if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ') {
    	return tabuleiro[0][2];
	}
	// Se ninguém ganhou
	return ' ';
}

// Função principal
int main() {
	char tabuleiro[3][3];
	char jogadorAtual = 'X';
	int linha, coluna;
	char vitoria;
	int jogadas = 0;

	inicializarTabuleiro(tabuleiro);

	// Loop principal
	while (1) {
    	imprimirTabuleiro(tabuleiro);
    	printf("Jogador %c, insira sua jogada (ex: A1): ", jogadorAtual);
    	char jogada[3];
    	scanf("%s", jogada);

    	linha = jogada[0] - 'A';
    	coluna = jogada[1] - '1';

    	if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ') {
        	printf("Jogada inválida. Tente novamente.\n");
        	continue;
    	}

    	tabuleiro[linha][coluna] = jogadorAtual;
    	jogadas++;

    	vitoria = verificarVitoria(tabuleiro);
    	if (vitoria != ' ') {
        	imprimirTabuleiro(tabuleiro);
        	printf("Jogador %c venceu!\n", vitoria);
        	break;
    	}

    	if (jogadas == 9) {
        	imprimirTabuleiro(tabuleiro);
        	printf("Deu Velha!\n");
        	break;
    	}

    	jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
	}

	printf("João Pedro\n");
	return 0;
}
