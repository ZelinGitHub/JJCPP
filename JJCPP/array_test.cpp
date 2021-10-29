#include <iostream>
using namespace std;

int a[10];
constexpr unsigned sz = 42;
int* parr[sz];




void TestArrayPlus() {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr + 2;
	std::cout << *p << std::endl;
}