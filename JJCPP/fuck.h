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
//��������
bool cstringCompare(const char*, const  char*);
//����ָ��
//pf��һ��ָ�룬����һ������
//pfָ��һ���������ú����Ĳ���������const string�����ã�����ֵ��bool����
extern bool (*pf)(const string&, const string&);
//�����������Ǻ���ָ������
void useBigger(const string& s1, const string& s2, bool(*pf)(const string&, const string&));
void useBigger2(const string& s1, const string& s2, bool pf(const string&, const string&));

void fuckFunctionPointer();
//����һ�������������ķ���������int (*)(int *,int)
int (*f1(int))(int*, int);

//PF��ָ������
using PF = int(*)(int*, int);
//F�Ǻ������ͣ����Ǻ���ָ������
using F = int(int*, int);
#endif
