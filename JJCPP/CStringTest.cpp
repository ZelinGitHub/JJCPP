#include <cstring>
#include <iostream>
using namespace std;

void fuckCString() {
	//传入字符串字面值
	int size1 = strlen("Hello,Hitler");
	char str1[] = { 'a','b','c','\0' };
	//传入数组名
	int size2 = strlen(str1);
	char* str1Ptr = str1;
	//传入char类型指针
	int size3 = strlen(str1Ptr);

	char ca[] = { 'C','+','+' };
	//严重错误：ca没有以空字符结束
	cout << strlen(ca) << endl;
}