#include <iostream>
using namespace std;

int main() {
	int N; 
	int X;
	
	cin >> N >> X;
	
	int temp = 0;
	for(int i = 0; i < N; i++) {
		cin >> temp;
		if (temp < X) {
			cout << temp << " ";
		}
	}
}
