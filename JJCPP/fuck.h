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
//pf��һ��ָ�룬����һ������
//pfָ��һ���������ú����Ĳ���������const string�����ã�����ֵ��bool����
extern bool (*pf)(const string&, const string&);
#endif
