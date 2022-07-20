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
1. ų�α׷� N�� �Է� �޴´�.
2. N�� �ּ� ���� �����̾�� �ϹǷ� -> 5�� ������� Ȯ���Ѵ� 
3. N�� 5�� ����̸� �� 5ų�α׷� ���� 5�� ���ش�. 
   N�� 3�� ����̸� �� 3ų�α׷� ���� 3�� ���ش�. 
4. N�� ������ 3 ~ 5000���� -> �ƴҰ�� �������� 
*/
