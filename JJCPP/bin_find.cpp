#include "bin_find.h"
#include <iostream>
using namespace std;


int BinSearch2(int xArray[],int n,int myValue)
{
	int leftIndex = 0;
	int rightIndex = n - 1;

	while (leftIndex <= rightIndex)
	{
		int middleIndex = (leftIndex + rightIndex) / 2;

		if (myValue < xArray[middleIndex])
		{
			rightIndex = middleIndex - 1;
		}
		else if (myValue > xArray[middleIndex])
		{
			leftIndex = middleIndex + 1;
		}
		else
		{
			return middleIndex;
		}
	}
	return -1;
}

void BinFindTest() {

	int skt[] = { 0,100,200,300,550,770,960,1368,1644,1911,1949,2019,2049 };
	int a = BinSearch2(skt, 13, 0);
	std::cout << a << endl;

	a = BinSearch2(skt, 13, 100);
	std::cout << a << endl;

	a = BinSearch2(skt, 13, 1911);
	std::cout << a << endl;

	a = BinSearch2(skt, 13, 3000);
	std::cout << a << endl;

	std::cin.get();
}