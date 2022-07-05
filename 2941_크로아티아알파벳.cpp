/*
#include <iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	int count = 0;
	
	for (int k = 0; k < a.length(); k++) {
		if(a[k] == 'c') {
			if(a[k + 1] == '=')
				count = count + 1;
		}
		else if(a[k] == 'c') {
			if(a[k + 1] == '-')
				count = count + 1;
		}
		else if(a[k] == 'd') {
			if(a[k + 1] == 'z' && a[k + 2] == '=')
				count = count + 1;
		}
		else if(a[k] == 'd') {
			if(a[k + 1] == '-')
				count = count + 1;
		}
		else if(a[k] == 'l') {
			if(a[k + 1] == 'j')
				count = count + 1;
		}
		else if(a[k] == 'n') {
			if(a[k + 1] == 'j')
				count = count + 1;
		}
		else if(a[k] == 's') {
			if(a[k + 1] == '=')
				count = count + 1;
		}
		else if(a[k] == 'z') {
			if(a[k + 1] == '=')
				count = count + 1;
		}
		else {
			count = count + 1;
		}
	}
	
	cout << count;
	
	return 0;
} 
*/


#include <iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	int count = 0;
	
	for (int k = 0; k < a.length();) {
		if(a[k] == 'c') {
			if(a[k + 1] == '=') {
				count = count + 1;
				k += 2;
			}
				
			else if(a[k + 1] == '-') {
				count = count + 1;
				k += 2;
			}
				
			else {
				count = count + 1;
				k++;
			}
		}
		else if(a[k] == 'd') {
			if(a[k + 1] == 'z' && a[k + 2] == '=') {
				count = count + 1;
				k += 3;	
			}
				
			else if(a[k + 1] == '-') {
				count = count + 1;
				k += 2;
			}
				
			else {
				count = count + 1;
				k++;
			}
		}
		else if(a[k] == 'l') {
			if(a[k + 1] == 'j') {
				count = count + 1;
				k += 2;
			}
				
			else {
				count = count + 1;
				k++;
			}
		}
		else if(a[k] == 'n') {
			if(a[k + 1] == 'j') {
				count = count + 1;
				k += 2;
			}
				
			else {
				count = count + 1;
				k++;
			}
		}
		else if(a[k] == 's') {
			if(a[k + 1] == '=') {
				count = count + 1;
				k += 2;
			}
				
			else {
				count = count + 1;
				k++;
			}
		}
		else if(a[k] == 'z') {
			if(a[k + 1] == '=') {
				count = count + 1;
				k += 2;	
			}
				
			else {
				count = count + 1;
				k++;
			}
		}
		else {
			count = count + 1;
			k++;
		}
	}
	
	cout << count;
	
	return 0;
} 
