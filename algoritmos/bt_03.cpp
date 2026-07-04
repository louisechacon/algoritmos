#include <iostream>
using namespace std;

int labirinto_bt(int labirinto[5][6], int linha, int coluna, int l, int c) {
	
	if (l < 0 || c < 0 || l >= linha || c >= coluna || labirinto[l][c] == 1) {
		return 1000000000;
	}
	
	if (l == linha-1 && c == coluna-1) {
		return 1;
	}

	labirinto[l][c] = 1;
	
	int cima = 1 + (labirinto_bt(labirinto, linha, coluna, l-1, c));
	
	int esquerda = 1 + (labirinto_bt(labirinto, linha, coluna, l, c-1));
	
	int direita = 1 + (labirinto_bt(labirinto, linha, coluna, l, c+1));
	
	int baixo = 1 + (labirinto_bt(labirinto, linha, coluna, l+1, c));
	
	labirinto[l][c] = 0;
	
	int melhorCaminho = 1000000000;
	
	if (cima < melhorCaminho) {
		melhorCaminho = cima;
	}
	
	if (esquerda < melhorCaminho) {
	    melhorCaminho = esquerda;
	}
	
	if (direita < melhorCaminho) {
	    melhorCaminho = direita;
	}
	
	if (baixo < melhorCaminho) {
	    melhorCaminho = baixo;
	}
	
	return melhorCaminho;
}

int main() {
    int linha, coluna, labirinto[5][6];
    cin >> linha >> coluna;
    
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> labirinto[i][j];
        }
    }
    
    int melhor = labirinto_bt(labirinto, linha, coluna, 0, 0);
    
    if (melhor == 1000000000) {
        cout << "-1";
    } else {
        cout << melhor;
    }
    
    return 0;
}