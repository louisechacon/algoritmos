#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	
	int contador = 0;
	int atual = arr[0];
	
	for (int i = 0; i < n; i++) {
		if (arr[i] == atual) {
			contador += 1;
		} else {
			cout << atual << " aparece " << contador << " vez(es)" << endl;
			atual = arr[i];
			contador = 1;
		}
	}
	cout << atual << " aparece " << contador << " vez(es)" << endl;
	return 0;
}