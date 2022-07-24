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
	//定义构造函数
	//定义默认构造函数
	Sales_data() : units_sold(2) {

	}
	//Sales_data() = default;
	//定义构造函数，只初始化bookNo
	//编译器将赋予其他成员默认值，如果内置类型或复合类型的其他成员没有显式初始化，则会报错
	//Sales_data(const std::string& s) :bookNo(s){

	//}
	//定义构造函数，初始化bookNo、units_sold、revenue
	Sales_data(const std::string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p* n) {

	}
	//声明构造函数
	Sales_data(std::istream&);

	//定义成员函数
	std::string isbn()const { return bookNo; }
	//声明成员函数
	Sales_data& combine(const Sales_data&);
	Sales_data combine2(const Sales_data&);
	double avg_price() const;
	//定义数据成员
	std::string bookNo;
	unsigned int  units_sold=0 ;
	double revenue = 0.0;
}; 

//声明类的非成员函数
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream & print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
#endif
