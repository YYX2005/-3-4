#include<iostream>
using namespace std;
int work(int a,int day) {
	if (day != 1) {
		day--;
		a = (a + 1) * 2;
		work(a, day);
	}
	else {
		cout << a;
		return a;
	}
}
int main() {
	int a = 1;
	int day = 10;
	work(a, day);

}
