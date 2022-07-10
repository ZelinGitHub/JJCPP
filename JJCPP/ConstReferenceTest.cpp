#include <iostream>
using namespace std;

void fuckConstReference() {
	const int ci = 1024;
	const int& r1 = ci;
	//r1 = 42;//错误
}

void fuckConstReferenceToConst() {
	//常量引用只能赋值到常量引用，不能赋值到非常量引用
	const int ci = 1024;
	const int& r1 = ci; //正确
	//int &r2 = ci; //错误：试图让一个非常量引用指向一个常量对象
}
void fuckReferenceToConst() {
	int ci = 1024;
	int& r = ci;
	const int& cr = r; //正确
	cout << r << endl;
}

void fuckConstReferenceToVar() {
	int i = 42;
	int& r1 = i;
	const int& r2 = i;
	i = 1;//i的值被修改为1
	r1 = 0; //r1并非常量，i的值被修改为0
	//r2 = 0; //错误r2是一个常量引用

}

void fuckConstReferenceDiffType() {
	//使用不同类型的变量初始化常量引用
	double dval = 3.14;
	const int& ri = dval;
}

void fuckConstReferenceDiffType2() {
	//使用不同类型的变量初始化常量引用
	double dval = 3.14;
	const int temp = dval;
	const int& ri = temp;
}

void fucReferenceDiffType() {
	double dval = 3.14;
	int temp = dval;
	int& ri = temp;
	//int& ri4 = dval3; //错误
}



