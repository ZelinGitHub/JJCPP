#include <iostream>
using namespace std;

int a[10];
constexpr unsigned sz = 42;
int* parr[sz];




void TestArrayNamePlus() {
	int arr[5] = { 1,2,3,4,5 };
	int* p = arr + 2;
	std::cout << *p << std::endl;

}

void TestArrayName() {
	int scores[3] = { 100,101,102 };
	int a = scores[0];
	int b = *scores;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

void TestArrayPointer() {
	int arr[5] = { 1,2,3,4,5 };

	int(*p3)[5] = &arr;
	std::cout << *p3 << std::endl;
	std::cout << **p3 << std::endl;
	std::cout << *(*p3 + 1) << std::endl;
	std::cout << *(*p3 + 2) << std::endl;
	std::cout << *(*p3 + 3) << std::endl;
	std::cout << *(*p3 + 4) << std::endl;
}

void TestArrayReference() {
	int arr[5] = { 1,2,3,4,5 };
	int(&arrRef)[5] = arr;
	std::cout << arrRef << std::endl;
	std::cout << *arrRef << std::endl;
	std::cout << *(arrRef+1) << std::endl;
	std::cout << *(arrRef+2) << std::endl;
	std::cout << *(arrRef+3) << std::endl;
	std::cout << *(arrRef+4) << std::endl;
}