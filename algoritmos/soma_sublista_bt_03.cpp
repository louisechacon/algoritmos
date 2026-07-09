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
	
	resposta ans = soma_sublista_bt(a, tam-1, soma-a[tam-1]); // tentando encontrar uma solução incluindo o último elemento
	
	if (ans.existe) {
		ans.sublista.push_back(a[tam-1]); // se encontrar, add esse último elemento à sublista p/ imprimir
	} else {
		ans = soma_sublista_bt(a, tam-1, soma); // senão, tenta sem incluir o último elemento e substitui ans por essa nova resposta
	}
	
	return ans;
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