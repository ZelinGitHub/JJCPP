#ifndef		QUICK_SORT_H
#define QUICK_SORT_H
void QuickSortCircle(int r[], int first, int end);
void swap(int* r, int i, int j);
void handleRightCursor(int i, int& j, int* r);
void handleLeftCursor(int& i, int j, int* r);
void QuickSortTest();
void QuickSort2(int  r[11]);
#endif