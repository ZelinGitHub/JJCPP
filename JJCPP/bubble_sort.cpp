#include <iostream>
#include "bubble_sort.h"
using namespace std;

void BubbleSortStrong(int r[], int n)
{
	int bound ;
	int exchangeLittle = n - 1;
	while (exchangeLittle != -1)
	{
		bound = exchangeLittle;
		//��û�н���ʱ�������������ʱexchangeΪ-1
		exchangeLittle = -1;
		//��һ�����ݺ�β�Ǳ�ָ�������
		for (int j = 0; j < bound; j++)
		{
			if (r[j] > r[j + 1])
			{
				int temp = r[j];
				r[j] = r[j + 1];
				r[j + 1] = temp;
				//exchangeLittle�������һ�ν����У����������������Ǳ���ָ���С���ĽǱ�
				//exchangeLittle��֮��ĽǱ�ָ��Ľ��������ɣ���һ��ֻ������֮ǰ�Ľ��
				//��û�н���ʱ�������������ʱexchangeLittleΪ-1
				exchangeLittle = j;
			}
	
		}
	}
}

void BubbleSort(int r[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//�Ƚϵ���j��j+1������j<n-i-1
		for (int j = 0; j < n - i-1; j++)
		{
			if (r[j] > r[j + 1])
			{
			int temp = r[j];
			r[j] = r[j + 1];
			r[j + 1] = temp;
			}
			else
			{
				//�������
			}
		}
	}
}


void BubbleSortIdiot(int r[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//�Ƚϵ���j��j+1������j<n-1
		for (int j = 0; j < n - 1; j++)
		{
			if (r[j] > r[j + 1])
			{
				int temp = r[j];
				r[j] = r[j + 1];
				r[j + 1] = temp;
			}
			else
			{
				//�������
			}
		}
	}
}

void BubbleSortShit(int r[],int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (r[j] > r[j + 1])
			{
				int temp = r[j];
				r[j] = r[j + 1];
				r[j + 1] = temp;
			}
		}
	}
}

void BubbleSortTest() {

	int r[] = { 3,2,1,666,8888,34,100,25,0,980721,17 };
	for (int i = 0; i < 11; i++)
	{
		std::cout << r[i] << " ";
	}
	std::cout << endl;
	BubbleSortIdiot(r, 11);
	for (int i = 0; i < 11; i++)
	{
		std::cout << r[i] << " ";
	}
	std::cout << endl;
	std::cin.get();
}