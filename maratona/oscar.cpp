#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	int arr[n];
	int contadores[m];
	
	for (int j = 0; j < m; j++) {
		contadores[j] = 0;
	}
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i]; // 1, 2, 3
		
		for (int j = 0; j < m; j++) {
			if (arr[i] >= j+1) {
				contadores[j] += 1;
			}
		}
		
	}
	
	for (int i = 0; i < m; i++) {
		cout << contadores[i] << " ";
	}
	return 0;
}