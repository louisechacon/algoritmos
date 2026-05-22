#include <iostream>
using namespace std;

void liquidificador(string s) {
	
	string a = "";
	string b = "";
	
	for (int i = 0; i < s.length(); i+=2) {
		a += s[i];
	}
	cout << a << endl;
	
	for (int i = 1; i < s.length(); i+=2) {
		b += s[i];
	}
	cout << b << endl;
}

int main() {
	string s;
	cin >> s;
	
	liquidificador(s);
	return 0;
}