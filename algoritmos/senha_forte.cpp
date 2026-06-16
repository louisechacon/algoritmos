#include <iostream>
#include <cctype>
using namespace std;


void verifica(int n) {
	
	string senha;
	
	for (int i = 0; i < n; i++) {
		cin >> senha;
		bool forte = true;
		
		// regra 1
		if (senha.length() <= 10) {
			forte = false;
		}
		
		// regra 2
		bool temLetra = false, temDigito = false;
		for (int j = 0; j < senha.length(); j++) {
			if (isdigit(senha[j])) {
				temDigito = true;
			}
		}
		
		for (int j = 0; j < senha.length(); j++) {
			if (isalpha(senha[j])) {
				temLetra = true;
			}
		}
		
		if (!temLetra && !temDigito) {
			forte = false;
		}
		
		// nenhum dígito após letra
		bool achouLetra = false;
		for (int j = 0; j < senha.length(); j++) {
			if (isdigit(senha[j])) {
				continue;
			}
			if (isdigit(senha[j + 1])) { // to analisando uma letra e vendo se tem um dígito depois dela
				cout << "N" << endl;
			}
		}
		
		for (int j = 0; j < senha.length(); j++) {
			if (isalpha(senha[j])) {
				continue;
			}
			
			if (senha[j] > senha[j + 1]) {
				cout << "N" << endl;
			}
		}
		
		for (int j = 0; j < senha.length(); j++) {
			if (isdigit(senha[j])) {
				continue;
			}
			
			if (senha[j] > senha[j + 1]) {
				cout << "N" << endl;
			}
		}
		cout << "S" << endl;
	}
}

int main() {
	int n;
	cin >> n;
	
	verifica(n);
	return 0;
}