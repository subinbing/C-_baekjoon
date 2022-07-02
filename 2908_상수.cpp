#include <iostream>
using namespace std;

int main() {
	int a, b;
	int n, k, j, i;
	int nn, kk, jj, ii;
	int aa, bb; 
	
	cin >> a >> b;
	
	n = a % 100;
	k = n % 10;  // 3번째 자리 
	j = n / 10;  // 2번째 자리 
	i = a / 100;  // 1번째 자리 
	aa = k*100 + j*10 + i;
		
	nn = b % 100;
	kk = nn % 10;  // 3번째 자리 
	jj = nn / 10;  // 2번째 자리 
	ii = b / 100;  // 1번째 자리 
	bb = kk*100 + jj*10 + ii;
	
	if(aa > bb)
		cout << aa;
	else 
		cout << bb;

} 
