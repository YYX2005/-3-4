#include<iostream>
using namespace std;
#include<cstring>
void shuzu(int list[])
{
	int num = sizeof(list) / sizeof(list[0]);
	for (int i = 0;i < num;i++)
	{
		for (int j = 0;j < num - 1 - i;j++)
		{
			if (list[j] > list[j + 1])
			{
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}

}

int main()
{

	int size;
	
	cout << "���������鳤�ȣ�";
	cin >> size;
	int* list1 = new int[size];
	cout << "�����������Ԫ��";
	for (int i = 0;i < size;i++)
	{
		cin >> list1[i];
	}
	for (int i = 0;i < size;i++)
	{
		int *d =&list1[i];
		cout << d<<endl;
	}

 }