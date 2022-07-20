#include <iostream>
using namespace std;

int main() {
	int N;
	int count = 0;
	
	cin >> N;
	
	while(N > 0) {
		if(N % 5 == 0) {
			N = N / 5;
			count += N;
			break;
		}
		else if(N % 3 == 0) {
			N = N - 3;
			count++;
		}
		else if(N >= 5) {  
			N = N - 5;  // 1
			count++;  // 1 
		} 
		else if(N >= 3) {
			N = N - 3;  
			count++;  
		}
		else  {
			cout << "-1"; 
			return 0;
		} 
	}
	cout << count;
	return 0;
} 


/*
1. 킬로그램 N을 입력 받는다.
2. N이 최소 봉지 개수이어야 하므로 -> 5의 배수인지 확인한다 
3. N이 5의 배수이면 그 5킬로그램 봉지 5을 빼준다. 
   N이 3의 배수이면 그 3킬로그램 봉지 3을 빼준다. 
4. N의 개수는 3 ~ 5000까지 -> 아닐경우 빠져나감 
*/
