#include <iostream>
using namespace std;

void fuckConstPointerToConst() {
	const double pi = 3.14;
	//double* ptr = &pi; //错误：ptr是一个普通指针，不能指向常量
	const double* cptr = &pi;
	//*cptr = 42; //错误：cptr是常量指针，不能用于改变其所指向对象的值
}


void fuckPointerToConst() {
	double pi = 3.14;
	double* ptr = &pi;
	const double* cptr = ptr; //正确
	cout << *cptr << endl;
}

void fuckConstPointerToVar() {
	double dval = 3.14;
	const double* cptr = &dval; //正确但是不能通过cptr改变dval的值
	double dval2 = *cptr;
	const double dval3 = *cptr;
	cout << "dval: " << dval << endl;
	cout <<"dval2: "<< dval2 << endl;
	cout<<"dval3: "<< dval3 << endl;
}