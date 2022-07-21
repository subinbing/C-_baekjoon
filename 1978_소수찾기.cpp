#include <iostream>
using namespace std;

int numm[101];

int main() {
	int N;
	cin >> N;
	//int num = 0;
	int count = 0;
	
	
	for(int i = 0; i < N; i++) {
		cin >> numm[i];
	}
	
	for(int j = 0; j < N; j++) {
		bool isPrime = true;
		for(int i = 2; i < numm[j]; i++) {
			if(numm[j] % i == 0) {
				isPrime = false;
			}  
		}
		
		if(isPrime == true) {
			count++;
		}
		if(numm[j] == 1) {
			count--;	
		}
	}

	cout << count;
	
	return 0;
}
