#include<iostream>
using namespace std;
int main() {
	bool gui[100];
	for (int i = 0;i < 100;i++) {
		gui[i] = 0;
	}
	for (int i = 1;i < 101;i++) {
		for (int j = i;j < 101;j +=i) {
			gui[j - 1] = !gui[j - 1];
		}
	}
	for (int i = 0;i < 100;i++) {
		if (gui[i] == 1) {
			i += 1;
			cout << i << endl;
		}
	}
}