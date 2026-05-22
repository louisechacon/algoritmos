#include <iostream>
using namespace std;

void calcula(int casos) {
	
	int diferente = 0;
	
	for (int i = 0; i < casos; i++) {
		int k1, k2, k3;
		cin >> k1 >> k2 >> k3;
		
		if (k1 == k2) {
			diferente = k3;
			cout << diferente << endl;
		} else if (k1 == k3) {
			diferente = k2;
			cout << diferente << endl;
		} else if (k2 == k3) {
			diferente = k1;
			cout << diferente << endl;
		}
	}
}

int main() {
	int casos;
	cin >> casos;
	
	calcula(casos);
	return 0;
}