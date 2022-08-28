#include "Sales_data.h"

//构造函数的定义
//作用域运算符::表示函数属于这个类
Sales_data::Sales_data(std::istream& is) {
	read(is, *this);
}

//成员函数的定义
//作用域运算符::表示函数属于这个类
double Sales_data::avg_price() const {
	if (units_sold) {
		return revenue / units_sold;
	}else {
		return 0;
	}
}
//成员函数的定义
Sales_data& Sales_data::combine(const Sales_data& rhs) {
	//把rhs的成员加到this对象的成员上
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	//返回调用该函数的对象
	return *this; 
}//成员函数的定义
const Sales_data& Sales_data::combine4(const Sales_data& rhs) const {
	//返回调用该函数的对象
	return *this; 
}
//成员函数的定义
Sales_data Sales_data::combine2(const Sales_data& rhs) {
	//把rhs的成员加到this对象的成员上
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	//返回调用该函数的对象
	return *this; 
}
//成员函数的定义
Sales_data Sales_data::combine3(const Sales_data& rhs) const{
	//返回调用该函数的对象
	return *this; 
}
//成员函数的定义
const Sales_data Sales_data::combine5(const Sales_data& rhs) const{
	//返回调用该函数的对象
	return *this; 
}
//类的非成员函数的定义
istream& read(istream& is, Sales_data& item) {
	double price = 0;
	// 先输入图书编号为item.bookNo赋值
	// 再输入售出单位为item.units_sold赋值
	// 再输入价格为price赋值
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
//类的非成员函数的定义
ostream& print(ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << " " << item.revenue << " " << item.avg_price();
	return os;
}
//类的非成员函数的定义
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}


