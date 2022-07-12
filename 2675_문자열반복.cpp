#include <iostream>
using namespace std;

int main() {
	string S;
	int N, R;
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> R >> S;
		
		// 문자열을 하나하나씩 체크하면서
		for(int j = 0; j < S.length(); j++) { 
			// 입력 받은 R 개수만큼 더 반복 
			for(int jj = 0; jj < R; jj++) {
				cout << S[j];  // 문자열 S의 j번째  
			}
		}
		cout << endl;
	}
	return 0;
	
} 
