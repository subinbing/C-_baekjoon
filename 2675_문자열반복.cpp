#include <iostream>
using namespace std;

int main() {
	string S;
	int N, R;
	cin >> N;
	
	for(int i = 0; i < N; i++) {
		cin >> R >> S;
		
		// ���ڿ��� �ϳ��ϳ��� üũ�ϸ鼭
		for(int j = 0; j < S.length(); j++) { 
			// �Է� ���� R ������ŭ �� �ݺ� 
			for(int jj = 0; jj < R; jj++) {
				cout << S[j];  // ���ڿ� S�� j��°  
			}
		}
		cout << endl;
	}
	return 0;
	
} 
