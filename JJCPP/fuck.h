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
void fuckReferenceToConst();
void fuckPointerToConst();
bool lengthCompare( const string&, const  string&);
string::size_type sumLength(const string&, const  string&);
bool cstringCompare(const char*, const  char*);
//pf是一个指针，不是一个函数
//pf指向一个函数，该函数的参数是两个const string的引用，返回值是bool类型
extern bool (*pf)(const string&, const string&);
#endif
