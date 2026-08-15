#include <iostream>
using namespace std;

int min(int a[], int i_inicial, int i_final) {
	
	int i_min = i_inicial;
	
	for (int i = (i_inicial + 1); i < i_final; i++) {
		if (a[i] < a[i_min]) {
			i_min = i;
		}
	}
	
	return i_min;
}

void selection_sort(int num[], int tam) {
	
	for (int i = 0; i < (tam-1); i++) { // n vezes
		int i_do_menor = min(num, i, tam); // n cada chamada
		int temp = num[i];
		num[i] = num[i_do_menor];
		num[i_do_menor] = temp;
	}
} // O(n²)