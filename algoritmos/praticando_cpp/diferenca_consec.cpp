#include <iostream>
#include <cmath>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	
	int maior_diferenca = 0;
	
	for (int i = 1; i < n; i++) {
		int anterior = arr[i - 1];
		int atual = arr[i];
		int diferenca = std::abs(anterior - atual);
		
		if (diferenca > maior_diferenca) {
			maior_diferenca = diferenca;
		}
	}
	
	std::cout << maior_diferenca;
}