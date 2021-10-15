#include <iostream>
#include "quick_sort.h"
using namespace std;

void swap(int* r, int i, int j)
{
	int temp = r[i];
	r[i] = r[j];
	r[j] = temp;
}
void handleLeftCursor(int& i, int j, int* r)
{
	while (i < j)
	{
		//����Ŀ��Ǳ�����α�Ľ��
		if (r[i] > r[j])
		{
			swap(r, i, j);
			break;
		}
		//���ý��������α�����
		else
		{
			i++;
		}
	}
}

void handleRightCursor(int i, int& j, int* r)
{
	while (i < j)
	{
		//����Ŀ��Ǳ�����α�Ľ��
		if (r[i] > r[j])
		{
			swap(r, i, j);
			break;
		}
		//���ý��������α�����
		else
		{
			j--;
		}
	}
}
//����
int Partition2(int r[], int first, int end)
{
	int i = first;
	int j = end;
	while (i<j)
	{		
		handleRightCursor(i, j, r);
		handleLeftCursor(i, j, r);
	}
	return i;
}



void QuickSortCircle(int r[], int first, int end)
{

	if (first < end)
	{
		int pivot = Partition2(r, first, end);
		QuickSortCircle(r, first, pivot - 1);
		QuickSortCircle(r, pivot + 1, end);
	}
}
void QuickSort(int  r[],int n)
{
	QuickSortCircle(r, 0, 10);
}


int cut(int r[], int leftCursor, int rightCursor)
{
	while (leftCursor < rightCursor)
	{
		while (leftCursor < rightCursor)
		{
			if (r[leftCursor] > r[rightCursor])
			{
				int temp = r[leftCursor];
				r[leftCursor] = r[rightCursor];
				r[rightCursor] = temp;
			}
			else
			{
				rightCursor--;
			}
		}

		while (leftCursor < rightCursor) {
			if (r[leftCursor] > r[rightCursor])
			{
				int temp = r[leftCursor];
				r[leftCursor] = r[rightCursor];
				r[rightCursor] = temp;
			}
			else
			{
				leftCursor--;
			}
		}
	}
	return leftCursor;
}


void QuickSortRange(int r[], int leftCursor, int rightCursor)
{
	if (leftCursor < rightCursor)
	{
		int good = cut(r, leftCursor, rightCursor);
		QuickSortRange(r, leftCursor, good - 1);
		QuickSortRange(r, good + 1, rightCursor);
	}
}




/*������д������������r������Ԫ�ظ���n*/
void QuickSortShit(int r[],int n)
{
	QuickSortRange(r, 0,n-1);
}


void QuickSortTest()
{
	std::cout << "ԭ���飺" << endl;
	int r[] = { 3,2,1,666,8888,34,100,25,0,980721,17 };
	for (int i = 0; i < 11;i++)
	{
		std::cout << r[i]<<" ";
	}
	std::cout << endl;
	std::cout << "���������" << endl;
	QuickSortShit(r,11);
	for (int i = 0; i < 11; i++)
	{
		std::cout << r[i] << " ";
	}
	std::cout << endl;
	std::cin.get();
}

