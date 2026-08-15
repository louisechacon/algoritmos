#include <iostream>
#include <algorithm>
using namespace std;

int machu_bt(int labirinto[6][8], int linha, int coluna, int l, int c) {
	
	if (l == 0) { // caso base
		return labirinto[l][c];
	}
	
	const int INFINITO = 1000000000;
	
	if (l < 0 || l >= linha || c < 0 || c >= coluna) {
		return INFINITO;
	}
	
	int op1 = machu_bt(labirinto, linha, coluna, l-1, c);
	
	int op2 = machu_bt(labirinto, linha, coluna, l-1, c-1);
	
	int op3 = machu_bt(labirinto, linha, coluna, l-1, c+1);
	
	return labirinto[l][c] + min(op1, min(op2, op3));
}

int main() {
	
	int linha = 6;
	int coluna = 8;
	int labirinto[6][8];
	
	for (int i = 0; i < linha; i++) {
		for (int j = 0; j < coluna; j++) {
			cin >> labirinto[i][j];
		}	
	}
	
	int ans = machu_bt(labirinto, linha, coluna, linha-1, 0);
	
	for (int i = 1; i < coluna; i++) {
		ans = min(ans, machu_bt(labirinto, linha, coluna, linha-1, i));
	}
	
	cout << ans << endl;
}