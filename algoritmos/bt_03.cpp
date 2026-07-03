#include <iostream>
using namespace std;

int labirinto_bt(int labirinto[5][6], int linha, int coluna, int l, int c) {
	
	if (l < 0 || c < 0 || l >= linha || c >= coluna||| labirinto[l][c] == 1) {
		return -1;
	}
	
	if (l == linha-1 && c == coluna-1) {
		return 1;
	}
	
	labirinto[l][c] == 1;
	
	int cima = (labirinto_bt(labirinto, linha, coluna, l-1, c));
	
	int esquerda = (labirinto_bt(labirinto, linha, coluna, l, c-1));
	
	int direita = (labirinto_bt(labirinto, linha, coluna, l, c+1));
	
	int baixo = (labirinto_bt(labirinto, linha, coluna, l+1, c));
	
	labirinto[l][c] == 0;
	
	int melhorCaminho = -1;
	
	if (cima != -1) {
		melhorCaminho = cima;
	}
	
	// ainda falta finalizar
	
}