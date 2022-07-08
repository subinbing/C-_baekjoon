#include <iostream>
using namespace std;

int main() {
	string S;
	cin >> S;
	
	for(int k = 97; k < 123; k++) {
		bool hasA = false;
		for(int i = 0; i < S.length(); i++) {
			if(S[i] == k) {
				hasA = true;
				cout << i << " ";
				break;
			}
		}
		if(hasA == false) {
			cout << "-1" << " ";
		}
	}
	/*
	bool hasA = false;
	for(int i = 0; i < S.length(); i++) {
		if(S[i] == 'a') {
			hasA = true;
			cout << i << " ";
		}
	}
	if(hasA == false) {
		cout << "-1" << " ";
	}
	
	bool hasB = false;
	for(int i = 0; i < S.length(); i++) {
		if(S[i] == 'b') {
			hasB = true;
			cout << i << " ";
		}
	}
	if(hasB == false) {
		cout << "-1" << " ";
	}
	
	bool hasC = false;
	for(int i = 0; i < S.length(); i++) {
		if(S[i] == 'c') {
			hasC = true;
			cout << i << " ";
		}	
	}
	if(hasC == false) {
		cout << "-1" << " ";
	}
	*/
} 
