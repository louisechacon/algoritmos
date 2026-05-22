#include <iostream>
#include <unordered_map>

int main() {
	int n;
	std::cin >> n;
	std::unordered_map<std::string, int> candidatos;
	int votos_do_maior = 0;
	std::string vencedor = "";
	
	for (int i = 0; i < n; i++) {
		std::string nome;
		std::cin >> nome;
		
		if (candidatos.find(nome) != candidatos.end()) {
			candidatos[nome] += 1;
		} else {
			candidatos[nome] = 1;
		}
		
		if (candidatos[nome] >= votos_do_maior) {
			votos_do_maior = candidatos[nome];
			vencedor = nome;
		}
	}
	
	std::cout << vencedor;
}