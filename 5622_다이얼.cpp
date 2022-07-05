/*
#include <iostream>
using namespace std;

int main() {
	string n;
	cin >> n;
	
	for(int k = 0; k < n.length(); k++) {
		if(n[k] == 'A' || n[k] == 'B' || n[k] == 'C') {
			cout << "2";
		} 
		else if(n[k] == 'D' || n[k] == 'E' || n[k] == 'F') {
			cout << "3";
		} 
		else if(n[k] == 'G' || n[k] == 'H' || n[k] == 'I') {
			cout << "4";
		} 
		else if(n[k] == 'J' || n[k] == 'K' || n[k] == 'L') {
			cout << "5";
		} 
		else if(n[k] == 'M' || n[k] == 'N' || n[k] == 'O') {
			cout << "6";
		} 
		else if(n[k] == 'P' || n[k] == 'Q' || n[k] == 'R' || n[k] == 'S') {
			cout << "7";
		} 
		else if(n[k] == 'T' || n[k] == 'U' || n[k] == 'V') {
			cout << "8";
		} 
		else if(n[k] == 'W' || n[k] == 'X' || n[k] == 'Y' || n[k] == 'Z') {
			cout << "9"; 
		}
	}
	
	
	
	return 0;
} 
*/

#include <iostream>
using namespace std;

int main() {
	string n;
	cin >> n;
	int t = 0;
	
	for(int k = 0; k < n.length(); k++) {
		if(n[k] <= 'O') {
			t = t + 3 + (n[k] - 65) / 3;
		} 
		
		else if(n[k] <= 'S') {
			t = t + 8;
		} 
		else if(n[k] <= 'V') {
			t = t + 9;
		} 
		else if(n[k] <= 'Z') {
			t = t + 10;
		}
	}
	cout << t;
	
	return 0;
} 
