#include <iostream>
#include <vector>
using namespace std;

struct resposta {
	bool existe;
	vector<int> sublista;
};

resposta soma_sublista_bt(int* a, int tam, int soma) {
	
	if (soma == 0) {
		return {true, {}};
	}
	
	if (soma < 0 || tam == 0) {
		return {false, {}};
	}
	
	resposta r1 = soma_sublista_bt(a, tam-1, soma-a[tam-1]);
	if (r1.existe) {
		r1.sublista.push_back(a[tam-1]);
	}
	
	resposta r2 = soma_sublista_bt(a, tam-1, soma);
	
	if (!r1.existe) {
		return r2; // se r1 não existir, retorne a "resposta" de r2
	}
	
	if (!r2.existe) {
		return r1; // e vice-versa
	}
	
	if (r1.sublista.size() < r2.sublista.size()) {
		return r1;
	} else {
		return r2;
	}
}

int main() {
	
	int n, soma;
	cin >> n >> soma;
	
	int* a;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	resposta ans = soma_sublista_bt(a, n, soma);
	
	if (ans.existe) {
		
		for (unsigned int i = 0; i < ans.sublista.size(); i++) {
			cout << ans.sublista[i] << " ";
		}
		
	} else {
		cout << "0";
	}
	
	delete[] a;
	return 0;
}