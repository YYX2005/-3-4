#include<iostream>
using namespace std;

int main() {
	double  arr[10];
	for (int i = 0;i < 10;i++) {
		cin >> arr[i];
	}

		for (int j = 0;j < 9;j++) {
			for (int m = 0;m < 9 - j ;m++) {
				if (arr[m] > arr[m + 1]) {
					double temp = arr[m];
					arr[m] = arr[m + 1];
					arr[m + 1] = temp;
				}
			}
		}
		for (int i = 0;i < 10;i++) {
			cout << arr[i]<<endl;
	}
}