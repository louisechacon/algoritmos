#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	
	int maior_sub = 1;
	int atual_sub = 1;
	
	if (n == 0) {
		maior_sub = 0;
		atual_sub = 0;
	}
	
	for (int i = 1; i < n; i++) {
		int atual = arr[i];
		int anterior = arr[i - 1];
		
		if (anterior <= atual) {
			atual_sub += 1;
		} else {
			atual_sub = 1;
		}
		
		if (atual_sub > maior_sub) {
			maior_sub = atual_sub;
		}
		
	}
	
	std::cout << maior_sub;
	
}