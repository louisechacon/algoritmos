#include <iostream>
#include <cmath>
using namespace std;

int ponto1 = 0;
int ponto2 = 1;

double menorDistancia(int x[], int y[], int n) {
	
	double distanciaMinima = sqrt((x[0] - x[1]) * (x[0] - x[1])) + ((y[0] - y[1]) * (y[0] - y[1]));
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			
			double distanciaAtual = sqrt(
			((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j]))
			);
			
			if (distanciaAtual < distanciaMinima) {
				distanciaMinima = distanciaAtual;
				
				ponto1 = i;
				ponto2 = j;
			}
		}
	}
	
	return distanciaMinima;
} // O(n²)

int main() {
	int n;
	cin >> n;
	
	int x[n], y[n];
	
	for (int i = 0; i < n; i++) {
		int x1, y1;
		cin >> x[i] >> y[i];
	}
	
	menorDistancia(x, y, n);
	
	cout << "Coordenadas mais próximas: " << "(" << x[ponto1] << ", " << y[ponto1] << ")  e ";
	
	cout << "( " << x[ponto2] << ", " << y[ponto2] << ")" << endl;
	return 0;
}