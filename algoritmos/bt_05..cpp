#include <iostream>
using namespace std;

int labirinto_bt(int labirinto[7][7], int linha, int coluna, int l, int c, int l_final, int c_final) {
	
	const int INF = 1000000000;
	
	if (l < 0 || c < 0 || l >= linha || c >= coluna || labirinto[l][c] == -1) {
		return INF;
	}
	
	if (l == l_final && c == c_final) {
		return labirinto[l][c];
	}
	
	int peso_cel_atual = labirinto[l][c];
	
	labirinto[l][c] = -1;
	
	int cima = peso_cel_atual + (labirinto_bt(labirinto, linha, coluna, l-1, c, l_final, c_final));
	
	int esquerda = peso_cel_atual + (labirinto_bt(labirinto, linha, coluna, l, c-1, l_final, c_final));
	
	int direita = peso_cel_atual + (labirinto_bt(labirinto, linha, coluna, l, c+1, l_final, c_final));
	
	int baixo = peso_cel_atual + (labirinto_bt(labirinto, linha, coluna, l+1, c, l_final, c_final));
	
	labirinto[l][c] = peso_cel_atual;
	
	int melhor = cima;
	
	if (esquerda < melhor) {
		melhor = esquerda;
	}
	
	if (direita < melhor) {
		melhor = direita;
	}
	
	if (baixo < melhor) {
		melhor = baixo;
	}
	
	return melhor;
}

int main() {
	
	int linha, coluna, labirinto[7][7];
	cin >> linha >> coluna;
	
	int l_inicial, c_inicial;
	int l_final, c_final;
	cin >> l_inicial >> c_inicial;
	cin >> l_final >> c_final;
	
	for (int i = 0; i < linha; i++) {
		for (int j = 0; j < coluna; j++) {
			cin >> labirinto[i][j];
		}
	}
	
	cout << (labirinto_bt(labirinto, linha, coluna, l_inicial, c_inicial, l_final, c_final));
	return 0;
}