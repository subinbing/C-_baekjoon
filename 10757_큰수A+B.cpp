#include <iostream>
using namespace std;

int arr1[100001];
int arr2[100001];
int arr[100001];
int len;

int main() {
	string a, b;
	cin >> a >> b;
	
	for(int i = a.length() - 1; i >= 0; i--) {
		arr1[a.length()-1-i] = a[i] - '0';
	}
	
	for(int i = b.length() - 1; i >= 0; i--) {
		arr2[b.length()-1-i] = b[i] - '0';
	}
	
	if(a.length() > b.length()) {
		len = a.length();
	}
	else {
		len = b.length();
	}
	
	for(int i = 0; i < len; i++) {
		arr[i] = arr1[i] + arr2[i] + arr[i];
		if(arr[i] >= 10) {
			arr[i+1]++;
			arr[i] -= 10;
		}
		
	}
	if(arr[len] != 0) {
		cout << arr[len];
	}
	
	for(int i = len - 1; i >= 0; i--) {
		cout << arr[i];
	}
	/*
	for(int i = 0; i < a.length(); i++) {
		cout << arr1[i];
	}
	
	for(int i = 0; i < b.length(); i++) {
		cout << arr2[i];
	}
	*/
	return 0;
} 

/*
1. 두 정수 a, b를 입력 받는다.
2. 두 수의 맨 오른쪽(일의 자리) 숫자끼리 더하고 
10이 넘으면 맨 오른쪽에서 두번째 숫자끼리 더할 때 1을 더해준다. 
3. 두 수의 더한 합을 출력  
  
*/
