#include <iostream>
using namespace std;

int soma_sublista_bt(int *a, int tam, int soma) {
	
	if (soma == 0) {
		return 1;
	}
	
	if (soma < 0 || tam == 0) {
		return 0;
	}
	
	int r1 = soma_sublista_bt(a, tam-1, soma-a[tam-1]);
	int r2 = soma_sublista_bt(a, tam-1, soma);
	return r1 + r2;
}

int main() {
	int n, soma;
	cin >> n >> soma;
	
	int* a;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int qtd = soma_sublista_bt(a, n, soma);
	cout << qtd;
	
	delete[] a;
	return 0;
}