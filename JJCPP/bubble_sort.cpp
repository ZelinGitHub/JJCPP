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
		//当没有交换时，排序结束，此时exchange为-1
		exchangeLittle = -1;
		//第一趟起泡后，尾角标指向最大结点
		for (int j = 0; j < bound; j++)
		{
			if (r[j] > r[j + 1])
			{
				int temp = r[j];
				r[j] = r[j + 1];
				r[j + 1] = temp;
				//exchangeLittle保存最后一次交换中，被交换结点的两个角标中指向较小结点的角标
				//exchangeLittle及之后的角标指向的结点排序完成，下一次只需排序之前的结点
				//当没有交换时，排序结束，此时exchangeLittle为-1
				exchangeLittle = j;
			}
	
		}
	}
}

void BubbleSort(int r[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//比较的是j和j+1，所以j<n-i-1
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
				//无需操作
			}
		}
	}
}


void BubbleSortIdiot(int r[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//比较的是j和j+1，所以j<n-1
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
				//无需操作
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