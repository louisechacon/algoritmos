#include <iostream>
using namespace std;


bool temParDeSoma(int arr[], int n, int soma) {
	
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == soma) {
				return true;
			}
		}
	}
	
	return false;

} // O(n²)

int main() {
	int n, soma;
	cin >> n >> soma;
	
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	if (temParDeSoma(arr, n, soma)) {
		cout << "Existe" << endl;
	} else {
		cout << "Não existe" << endl;
	}
	
	return 0;
	
}