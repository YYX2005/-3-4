/*#include<iostream>
using namespace std;
void mni(int a,int b) {
	int min,max;
	int mul, fac;
	if (a > b) {
		min = b;
	}
	else {
		min = a;
	}
	if (a > b) {
		max = a;
	}
	else {
		max=b;
	}
	for (;;min--)
	{
		if (a % min == 0 && b % min == 0) {
			fac = min;
			break;
		}
	}
	for (;;max++) {
		if (max % a == 0 && max % b == 0) {
			mul = max;
			break;
		}
	}
	cout << "��������ǣ�" << fac << endl;
	cout << "��С�������ǣ�" << mul << endl;
}
	

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	mni(a, b);
}*/