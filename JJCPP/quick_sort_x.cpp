#include <iostream>
using namespace std;

int Partition(int r[], int first, int end)
{
	int i = first;
	int j = end;
	while (i < j) {
		while (i < j && r[i] <= r[j]) {
			j--;
		}
		if (i < j) {
			int temp = r[i];
			r[i] = r[j];
			r[j] = temp;
			i++;
		}
		while(i<j &&r[i]<=r[j])
		{
			i++;
		}
		if (i < j) {
			int temp = r[i];
			r[i] = r[j];
			r[j] = temp;
			j--;
		}
	}
	return i;
}

void QuickSort(int r[], int first, int end) {
	int pivot;
	if (first < end) {
		pivot = Partition(r, first, end);
		QuickSort(r, first, pivot - 1);
		QuickSort(r, pivot + 1, end);
	}
}