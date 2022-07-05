#include <iostream>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int count = 0;
	bool increased = false;
	
	for(int i = 0; i < s.length(); i++) {
		if(s[i] != ' ' && increased == false) {
			increased = true;
			count += 1;
			
		}
		else if(s[i] == ' ') {
			increased = false;
		}
		
	}
	cout << count;
	return 0;
} 
