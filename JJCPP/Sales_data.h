#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
using namespace std;


/*
在头文件定义结构体、类
头文件名字一般和类名一致
头文件代码会原封不动复制到源文件
*/
struct Sales_data {
	//定义成员函数
	std::string isbn()const { return bookNo; }
	//声明成员函数
	Sales_data& compare(const Sales_data&);
	double avg_price() const;
	//定义数据成员
	std::string bookNo;
	unsigned int  units_sold = 0;
	double revenue = 0.0;
}; 

//声明非成员函数
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream & print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
#endif
