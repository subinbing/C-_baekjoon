#include <iostream>
using namespace std;

int arr[200];

int main() {
	string word;
	
	cin >> word;
	
	for(int i = 0; i < word.length(); i++) {
		if(word[i] >= 'a') {
			word[i] = word[i] - ('a'-'A');
		}
		int temp = word[i];
		arr[temp]++;
	} 
	
	int maxValue = -1;
	int maxIndex = 0;
	bool check = false;
	
	for(int i = 0; i < 200; i++) {
		
		if(arr[maxIndex] < arr[i]) {
			maxIndex = i;
			maxValue = arr[i];
			check = false;
		}
		else if(arr[maxIndex] == arr[i]) {
			check = true;
		}
	}
	
	if(check == true) {
		cout << '?';
		return 0;
	}
	
	if(maxIndex >= 'a') {
		cout << char(maxIndex - ('a' - 'A'));
		
	}
	
	else {
		cout << char(maxIndex);	
	}
	
} 


/*
1. �ܾ� �Է� 
2. �Է��� �ܾ� ���̸�ŭ �ݺ� 
3. ���� ���� ���� ���ĺ��� Ȯ�� -> � ���ĺ�?
4. ���ĺ��� �ߺ��Ǵ� ���� �ִ��� Ȯ�� 
5. ���� ���� ���� ���ĺ��� �빮�ڷ� ���  
*/

