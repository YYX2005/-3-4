#include <iostream>
using namespace std;
#include<cstring>
#include<cmath>
int parseHex(const char* const hexString)
{
	int num = strlen(hexString);

	int sum = 0;
	int* list = new int[num];
	for (int i = 0;i < num;i++)
	{
		if (hexString[i] >= 'A' && hexString[num] <= 'F')
		{
			list[i] = int(hexString[i]) - 55;
		}
		else

		{
			list[i] =(int( hexString[i])-48);
		}
	}
	for (int i = 0;i < num;i++)
	{
		int d = pow(16,i- 1);
		sum = sum + list[i] * d;
		cout << sum << endl;
	}
	cout << sum;
	return sum;
}

int main() {
	int size=999;
	char* hexString=new char[size];
	cin >> hexString;
	parseHex(hexString);
}
