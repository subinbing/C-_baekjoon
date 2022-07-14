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
1. 단어 입력 
2. 입력한 단어 길이만큼 반복 
3. 가장 많이 나온 알파벳을 확인 -> 어떤 알파벳?
4. 알파벳이 중복되는 것이 있는지 확인 
5. 가장 많이 나온 알파벳을 대문자로 출력  
*/

