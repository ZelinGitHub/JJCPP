#include <iostream>
using namespace std;

void TestCArray() {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr + 2;
	std::cout << *p << std::endl;
}