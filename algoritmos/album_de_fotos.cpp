#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	int l1, h1;
	cin >> l1 >> h1;
	
	int l2, h2;
	cin >> l2 >> h2;
		
	if (l1 + l2 <= x && h1 <= y && h2 <= y) {
		cout << "S" << endl;
	} else {
		cout << "N" << endl;
	}
	
	return 0;
} // O(1) pois sempre receberá duas fotos