#ifndef		FUCK_H
#define FUCK_H
#include <string>
using namespace std;
int lickAsshole();
int lickAsshole(int b);
void TestArrayName();
void TestArrayNamePlus();
void TestArrayPointer();
void TestArrayReference();
void TestManyDimensionsArray();
void TestManyDimensionsArray2();
void fuckReferenceToConst();
void fuckPointerToConst();
bool lengthCompare( const string&, const  string&);
string::size_type sumLength(const string&, const  string&);
//声明函数
bool cstringCompare(const char*, const  char*);
//声明指针
//pf是一个指针，不是一个函数
//pf指向一个函数，该函数的参数是两个const string的引用，返回值是bool类型
extern bool (*pf)(const string&, const string&);
//第三个参数是函数指针类型
void useBigger(const string& s1, const string& s2, bool(*pf)(const string&, const string&));
void useBigger2(const string& s1, const string& s2, bool pf(const string&, const string&));

void fuckFunctionPointer();
//定义一个函数，函数的返回类型是int (*)(int *,int)
int (*f1(int))(int*, int);

//PF是指针类型
using PF = int(*)(int*, int);
//F是函数类型，不是函数指针类型
using F = int(int*, int);
#endif
