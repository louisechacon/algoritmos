#include <iostream>
using namespace std;

int inicio = 0;
int fim = 0;

int maiorSublista(int arr[], int n) {
	
	int somaMaxima = arr[0];
	
	for (int i = 0; i < n; i++) {
		int somaAtual = 0;
		
		for (int j = i; j < n; j++) {
			somaAtual += arr[j];
			
			if (somaAtual > somaMaxima) {
				somaMaxima = somaAtual;
				inicio = i;
				fim = j;
			}
		}
	}
	
	return somaMaxima;
} // O(n²)


int main() {
	int n;
	cin >> n;
	
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << "Soma máxima: " << maiorSublista(arr, n) << endl;
	cout << "Índices: " << inicio << " a " << fim << endl;
	
	return 0;
}