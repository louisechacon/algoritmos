#include <iostream>
using namespace std;

bool labirinto_bt(int labirinto[7][7], int linha, int coluna, int l, int c, int l_final, int c_final) {
	
	if (l < 0 || c < 0 || l >= linha || c >= coluna || labirinto[l][c] == 1) {
		return false;
	}
	
	if (l == l_final && c == c_final) { // caso base
		return true;
	}
	
	labirinto[l][c] = 1;
	
	if (labirinto_bt(labirinto, linha, coluna, l-1, c, l_final, c_final)){
		return true;
	}
	
	if (labirinto_bt(labirinto, linha, coluna, l, c-1, l_final, c_final)){
		return true;
	}
	
	if (labirinto_bt(labirinto, linha, coluna, l, c+1, l_final, c_final)){
		return true;
	}
	
	if (labirinto_bt(labirinto, linha, coluna, l+1, c, l_final, c_final)){
		return true;
	}
	
	labirinto[l][c] = 0;
	return false;
	
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
	
	if (labirinto_bt(labirinto, linha, coluna, l_inicial, c_inicial, l_final, c_final)) {
		cout << "true";
	} else {
		cout << "false";
	}
}