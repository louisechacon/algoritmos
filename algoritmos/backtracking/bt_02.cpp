#include <iostream>
using namespace std;

int labirinto_bt(int labirinto[5][6], int linha, int coluna, int l, int c) {
    
    if (l < 0 || c < 0 || l >= linha || c>= coluna || labirinto[l][c] == 1) {
        return 0; // "false"
    }
    
    if (l == linha-1 && c == coluna-1) {
        return 1; // "true"
    }
    
    labirinto[l][c] = 1;
    
    
    int qtd = 0;
    
    qtd += labirinto_bt(labirinto, linha, coluna, l-1, c);
    qtd += labirinto_bt(labirinto, linha, coluna, l, c-1);
    qtd += labirinto_bt(labirinto, linha, coluna, l, c+1);
    qtd += labirinto_bt(labirinto, linha, coluna, l+1, c);
    
    labirinto[l][c] = 0;
    return qtd;
}

int main() {
    
    int linha, coluna, labirinto[5][6];
    cin >> linha >> coluna;
    
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> labirinto[i][j];
        }
    }
    
    cout << labirinto_bt(labirinto, linha, coluna, 0, 0);

    return 0;
}