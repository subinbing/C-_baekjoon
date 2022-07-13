#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	string word;
	
	int count = 0;
	
	for(int i = 0; i < N; i++) {  // 입력한 N의 값 개수까지만 반복 
		cin >> word;  // 단어 입력 
		bool a = true;
		
		// 단어 하나의 길이까지 반복 
		for(int k = 0; k < word.length(); k++) {   
			for(int j = k+1; j < word.length(); j++) {
				if(word[k] == word[k+1]) {
					break;
				}
				// k = 0일때 j = 1
				// word[0] == word[1] && word[1] != word[0] 
				/*
				현재 알파벳이 그 전의 문자와 같지 않고, 
				현재 알파벳이 그 다음다음의  문자와 같지 않은경우 
				빠져나와 단어를 체크하지 않는다. 
				=> 바로 앞의 알파벳이 같지 않고,
				전에  같은 문자가 나오면 그룹단어 X  -> false
				*/ 
				
				if(word[k] == word[j]) {
					a = false;
					break;
				}
			}
		}
		if(a == true) {  // true인 경우만 count 1증가 -> 출력 
			count++;
		}
	}
	cout << count;
	
	return 0;
} 
/*
1. 처음 알파벳이랑 그 다음다음 알파벳을 비교한다.
2. 처음 알파벳과 그 다음다음 알파벳이 동일하면 빠져나온다.
                                      동일하지X +1을 해준다.
3. 이 과정을 반복한다.
(처음 알파벳부터 하나씩 반복한다.)
 
만약 위의 반복 과정이 끝나면 체크한 단어(+1한 것)를 더해준다. 
*/ 
