#include <iostream>
using namespace std;
#include<cstring>
	void count(const char s[], int counts[])
	{
		int d = strlen(s);
		for (int i = 0;i < d;i++)
		{
			for (int num = 65, shu = 0;num <= 90 && shu < 26;num++, shu++)
			{
				if (s[i] == num || s[i] == (num + 32))
				{
					counts[shu]++;
				}
			}
		}

		
		for (int num = 65, shu = 0;num <= 90 && shu < 26;num++, shu++)
			{
				if (counts[shu] > 0)
				{
					char f = num;
					cout << f << counts[shu] << endl;;
				}
			}
		

	}
	int main()
	{
		const int n1 = 26;  
		const int n2 = 99;  
		char s[n2];
		int counts[n1];
		cout << "Enter a string : ";
		cin.getline(s, n2);
		for (int i = 0;i < n1;i++)
		{
			counts[i] = 0;
		}
	 count(s,counts);
		return 0;
	}
