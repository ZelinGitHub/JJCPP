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
	std::cout <<"arrRef: "<< arrRef << std::endl;
	std::cout << "&arrRef: " << &arrRef << std::endl;
	std::cout << "*(&arrRef): " << *(&arrRef) << std::endl;
	std::cout << "*arrRef: " << *arrRef << std::endl;
	std::cout << "*(arrRef+1): " << *(arrRef+1) << std::endl;
	std::cout << "*(arrRef+2): " << *(arrRef+2) << std::endl;
	std::cout << "*(arrRef+3): " << *(arrRef+3) << std::endl;
	std::cout << "*(arrRef+4): " << *(arrRef+4) << std::endl;
}

void TestManyDimensionsArray() {
	int ia[3][4] = {
   {0,1,2,3},
   {4,5,6,7},
   {8,9,10,11}
	};
	std::cout << "ia: "<<ia << std::endl;
	std::cout << "ia[0]: " << ia[0] << std::endl;
	std::cout << "ia[0]+1: " << ia[0] + 1 << std::endl;
	std::cout << "ia[0]+2: " << ia[0] + 2 << std::endl;
	std::cout << "ia[0]+3: " << ia[0] + 3 << std::endl;
	std::cout << "ia[1]: " << ia[1] << std::endl;
	std::cout << "ia[1]+1: " << ia[1] + 1 << std::endl;
	std::cout << "ia[1]+2: " << ia[1] + 2 << std::endl;
	std::cout << "ia[1]+3: " << ia[1] + 3 << std::endl;
	std::cout << "ia[2]: " << ia[2] << std::endl;
	std::cout << "ia[2]+1: " << ia[2] + 1 << std::endl;
	std::cout << "ia[2]+2: " << ia[2] + 2 << std::endl;
	std::cout << "ia[2]+3: " << ia[2] + 3 << std::endl;
	std::cout << "&ia: "<< &ia << std::endl;
	std::cout << "&ia[0]: " << &ia[0] << std::endl;
	std::cout << "&ia[1]: " << &ia[1] << std::endl;
	std::cout << "&ia[2]: " << &ia[2] << std::endl;
	std::cout << "*ia: " << *(ia) << std::endl;
	std::cout << "*(ia[0]): " << *(ia[0]) << std::endl;
	std::cout << "*(ia[0]+1): " << *(ia[0]+1) << std::endl;
	std::cout << "*(ia[0]+2): " << *(ia[0]+2) << std::endl;
	std::cout << "*(ia[0]+3): " << *(ia[0]+3) << std::endl;
	std::cout << "*(ia[1]): " << *(ia[1]) << std::endl;
	std::cout << "*(ia[1]+1): " << *(ia[1] + 1) << std::endl;
	std::cout << "*(ia[1]+2): " << *(ia[1] + 2) << std::endl;
	std::cout << "*(ia[1]+3): " << *(ia[1] + 3) << std::endl;
	std::cout << "*(ia[2]): " << *(ia[2]) << std::endl;
	std::cout << "*(ia[2]+1): " << *(ia[2] + 1) << std::endl;
	std::cout << "*(ia[2]+2): " << *(ia[2] + 2) << std::endl;
	std::cout << "*(ia[2]+3): " << *(ia[2] + 3) << std::endl;

}
void TestManyDimensionsArray2() {
	int ia[3][4] = {
   {0,1,2,3},
   {4,5,6,7},
   {8,9,10,11}
	};
	int(*p)[4] = ia;
	cout << "*p: " << *p << endl;
	cout << "**p: " << **p << endl;
	p = &ia[1];
	cout << "*p: " << *p << endl;
	cout << "**p: " << **p << endl;
	p = &ia[2];
	cout << "*p: " << *p << endl;
	cout << "**p: " << **p << endl;
}