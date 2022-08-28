// JJCPP.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//程序文件是源文件
#include <iostream>
#include <vector>
//包含系统文件使用尖括号<>，包含用户头文件使用双引号""
#include "Sales_data.h"
#include <string>
#include "fDeclare.h"
#include "bubble_sort.h"
#include "quick_sort.h"
#include "insert_sort.h"
#include "fuck.h"
#include "Sales_data.h"
#include "Screen.h"
using namespace std;



string* pdd;


//主函数的返回值必须为int
int main()
{
	//fuckReferenceToConst();
	//fuckPointerToConst();
	//fuckFunctionPointer();
	//int a = 3;
	//int b=(*f1(1))(&a,22);
	//cout << b << endl;
	//定义Sales_data类型的变量（创建对象）
	Sales_data total;
	Sales_data trans;
	//total.combine(trans);
	//Sales_data sales_data{"abc"};
	//调用默认构造函数创建对象
	Sales_data sales_data;
	//cout << "sales_data.bookNo: " << sales_data.bookNo << endl;
	//cout << "sales_data.units_sold: " << sales_data.units_sold << endl;
	//cout << "sales_data.revenue: " << sales_data.revenue;
	//fuckConstPointerToVar();
	//创建对象并调用构造方法初始化对象
	Screen myScreen{ 1,2,'a' };
	//move函数返回的对象本身而非对象的副本
	//把一些列的操作连接在一条表达式上，这些操作将在同一个对象上执行
	//myScreen.move(4, 0).set('#');
	////以上操作等价于
	//myScreen.move(4, 0);
	//myScreen.set('#');
	cout <<"pdd==NULL: "<< (pdd==NULL) << endl;
	cout << "1==true: " << (1 == true) << endl;
	cout << "0==true: " << (0 == true) << endl;
	return 0;
}


