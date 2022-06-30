#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	/*
	cout << "    *";
	cout << "   **";
	cout << "  ***";
	cout << " ****";
	cout << "*****";
	*/
	
	for(int line = 1; line <= n; line++) {
		for(int i = 0; i < n-line; i++) {
			cout << " ";
		}
		for(int j = 0; j < line; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
