#include <iostream>
using namespace std;

bool soma_sublista_bt(int *a, int tam, int soma) {
	
	if (soma == 0) {
		return true;
	}
	
	if (soma < 0 || tam == 0) {
		return false;
	}
	
	bool r = soma_sublista_bt(a, tam-1, soma-a[tam-1]); // o último elemento está na solução. desconto seu valor da soma que vou encontrar
	r = r || soma_sublista_bt(a, tam-1, soma); // o último elemento não está na solução
	return r;
}

int main() {
	int n, soma;
	cin >> n >> soma;
	
	int* a;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	if (soma_sublista_bt(a, n, soma)) {
		cout << "1";
	} else {
		cout << "0";
	}
	
	delete[] a;
	return 0;
}