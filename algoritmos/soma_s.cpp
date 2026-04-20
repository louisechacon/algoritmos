#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	
	int s;
	std::cin >> s;
	
	int contador = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (arr[i] + arr[j] == s) {
				contador += 1;
			}
		}
	}
	
	if (contador > 0) {
		std::cout << "S";
	} else {
		std::cout << "N";
	}
}