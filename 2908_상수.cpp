#include <iostream>
using namespace std;

int main() {
	int a, b;
	int n, k, j, i;
	int nn, kk, jj, ii;
	int aa, bb; 
	
	cin >> a >> b;
	
	n = a % 100;
	k = n % 10;  // 3��° �ڸ� 
	j = n / 10;  // 2��° �ڸ� 
	i = a / 100;  // 1��° �ڸ� 
	aa = k*100 + j*10 + i;
		
	nn = b % 100;
	kk = nn % 10;  // 3��° �ڸ� 
	jj = nn / 10;  // 2��° �ڸ� 
	ii = b / 100;  // 1��° �ڸ� 
	bb = kk*100 + jj*10 + ii;
	
	if(aa > bb)
		cout << aa;
	else 
		cout << bb;

} 
