#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>


/*
在头文件定义结构体、类
头文件名字一般和类名一致
头文件代码会原封不动复制到源文件
*/
struct Sales_data {
	std::string bookNo;
	unsigned int  units_sold = 0;
	double revenue = 0.0;
}; 
#endif
