#include<iostream>

using namespace std;
int main() {
	double arr[10];
	double ar[10];
	int m = 0;
	for (int i = 0;i <= 9;i++) {
		cin >> arr[i];
	}
	for (int i = 0;i <=9;i++) {
		for (int j = 0;j <= 9;j++) {
			if (arr[i] == ar[j]) {
				break;
			}
			if (j==9) {
				ar[m] = arr[i];
				m ++;
			}

		}
	}
	for (int i = 0;i < m;i++) {
		cout << ar[i]<<endl ;
	}
}