#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	if(N == 1) {
		return 0;
	}
		
	for(int i = 2; i <= N; i++) {
		while(N % i == 0) {
			N = N / i;  // 36
			cout << i << endl;	

		}
	}
	return 0;
} 
