#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2) 
{
	int size3 = size1 + size2;
	int* list3 = new  int[size3];
	for (int i = 0;i <= size1 - 1;i++)
	{
		list3[i] = list1[i];
	}
	int j = 0;
	for(int i=size1;i<=size3-1;i++)
	{

		list3[i] = list2[j];
		j++;
	}
	for (int i = 0;i < size3;i++)
	{
		for (int j = 0;j < size3 - i - 1;j++)
		{
			if (list3[j] > list3[j + 1])
			{
				int temp = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = temp;
			}
		}
	}
	cout << "����������Ԫ�ظ���";
	cout << size3;
	cout << "����������Ԫ��";
	for (int i = 0;i <= size3 - 1;i++)
	{
		cout << list3[i]<<" ";
	}
}
int main()
{
	int size1, size2;
	cout << "�������һ������Ԫ�ظ���" ;
	cin >> size1;
	cout << "�������һ�������Ԫ��";
	int *list1=new int[size1];
	for (int i = 0;i < size1;i++) 
	{
		cin >> list1[i];
	}
	for (int i = 0;i < size1;i++) 
	{
		for (int j = 0;j < size1 - i - 1;j++)
		{
			if (list1[j] > list1[j + 1]) 
			{
				int temp = list1[j];
				list1[j] = list1[j + 1];
				list1[j + 1] = temp;
			}
		}
	}
	cout << "������ڶ�������Ԫ�ظ���";
	cin >> size2;
	cout << "������ڶ��������Ԫ��";
	int *list2=new int [size2];
	for (int i = 0;i < size2;i++)
	{
		cin >> list2[i];
	}
	for (int i = 0;i < size2;i++)
	{
		for (int j = 0;j < size2 - i- 1;j++)
		{
			if (list2[j] > list2[j + 1])
			{
				int temp = list2[j];
				list2[j] = list2[j + 1];
				list2[j + 1] = temp;
			}
		}
	}
	merge(  list1, size1,  list2, size2);
}