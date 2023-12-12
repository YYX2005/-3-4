#include <iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{

	int a, b, c, j, k;
	a = strlen(s1);
	b = strlen(s2);
	bool* s3 = new bool[a];
	for (int m = 0;m < a;m++)
		s3[m] = false;
	for (int i = 0;i < b - a + 1;i++)
	{
		for (j = 0, k = i;(j < a) && (k < i + a);j++, k++)
			if (s1[j] == s2[k])
			{
				c = i;
				s3[j] = true;
			}
		int h = 0;
		for (int n = 0;n < a;n++)
		{
			if (s3[n] == false && i == b - a)
			{
				return -1;
				break;
			}
			if (s3[n])
				h++;
		}
		if (h == a)
		{
			return c;
		}
	}

}



int main()
{

	const int size = 999;
	cout << "Enter the first string : ";
	char s1[size], s2[size];
	cin.getline(s1, size);
	cout << "Enter the second string : ";
	cin.getline(s2, size);
	int d = indexOf(s1, s2);
	cout << d;
}