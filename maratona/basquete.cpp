#include <iostream>
using namespace std;

void calcula(int n) {
	
	string tempo;
	int contTemp1 = 0;
	int contTemp2 = 0;

	for (int i = 0; i < n; i++) {
		cin >> tempo;
		
		string idTempo = "";
		string idPontos = "";
		idTempo = tempo[6];
		idPontos = tempo[9];
			
		if (idTempo == "1") {
			if (idPontos == "1") {
				contTemp1 += 1;
			} else if (idPontos == "2") {
				contTemp1 += 2;
			} else {
				contTemp1 += 3;
			}
		}
			
		if (idTempo == "2") {
			if (idPontos == "1") {
				contTemp2 += 1;
			} else if (idPontos == "2") {
				contTemp2 += 2;
			} else {
				contTemp2 += 3;
			}
		}
	}
	cout << contTemp1 << " x " << contTemp2 << endl;
}
	
int main() {
	int n;
	cin >> n;
	
	calcula(n);
	return 0;
}