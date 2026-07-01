#include <iostream>
using namespace std;

bool labirinto_bt(int labirinto[5][6], int linha, int coluna, int l, int c) {
    
    if (l<0 || c<0 || l>=linha || c>=coluna || labirinto[l][c]==1) {
        return false;
    }
    
    if (l==linha-1 && c==coluna-1) {
        return true;
    }
    
    labirinto[l][c] = 1;
    
    if (labirinto_bt(labirinto, linha, coluna, l-1, c)) {
        return true;
    }
    
    if (labirinto_bt(labirinto, linha, coluna, l, c-1)) {
        return true;
    }
    
    if (labirinto_bt(labirinto, linha, coluna, l, c+1)) {
        return true;
    }
    
    if (labirinto_bt(labirinto, linha, coluna, l+1, c)) {
        return true;
    }
    
    return false;
}

int main() {
    
    int linha, coluna, labirinto[6][6];
    cin >> linha >> coluna;
    
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cin >> labirinto[i][j];
        }
    }
    
    if(labirinto_bt(labirinto, linha, coluna, 0, 0)) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}