#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int contador = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				cout << "Há elementos repetidos";
				return 0;
			}	
		}
	}
	
	cout << "Não há elementos repetidos";
	return 0;
}