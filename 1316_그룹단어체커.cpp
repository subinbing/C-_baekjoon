#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	string word;
	
	int count = 0;
	
	for(int i = 0; i < N; i++) {  // �Է��� N�� �� ���������� �ݺ� 
		cin >> word;  // �ܾ� �Է� 
		bool a = true;
		
		// �ܾ� �ϳ��� ���̱��� �ݺ� 
		for(int k = 0; k < word.length(); k++) {   
			for(int j = k+1; j < word.length(); j++) {
				if(word[k] == word[k+1]) {
					break;
				}
				// k = 0�϶� j = 1
				// word[0] == word[1] && word[1] != word[0] 
				/*
				���� ���ĺ��� �� ���� ���ڿ� ���� �ʰ�, 
				���� ���ĺ��� �� ����������  ���ڿ� ���� ������� 
				�������� �ܾ üũ���� �ʴ´�. 
				=> �ٷ� ���� ���ĺ��� ���� �ʰ�,
				����  ���� ���ڰ� ������ �׷�ܾ� X  -> false
				*/ 
				
				if(word[k] == word[j]) {
					a = false;
					break;
				}
			}
		}
		if(a == true) {  // true�� ��츸 count 1���� -> ��� 
			count++;
		}
	}
	cout << count;
	
	return 0;
} 
/*
1. ó�� ���ĺ��̶� �� �������� ���ĺ��� ���Ѵ�.
2. ó�� ���ĺ��� �� �������� ���ĺ��� �����ϸ� �������´�.
                                      ��������X +1�� ���ش�.
3. �� ������ �ݺ��Ѵ�.
(ó�� ���ĺ����� �ϳ��� �ݺ��Ѵ�.)
 
���� ���� �ݺ� ������ ������ üũ�� �ܾ�(+1�� ��)�� �����ش�. 
*/ 
