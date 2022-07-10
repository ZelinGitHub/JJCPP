#include "Sales_data.h"
double Sales_data::avg_price() const {
	if (units_sold) {
		return revenue / units_sold;
	}else {
		return 0;
	}
}

Sales_data& Sales_data::combine(const Sales_data& rhs) {
	//把rhs的成员加到this对象的成员上
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	//返回调用该函数的对象
	return *this; 
}
Sales_data Sales_data::combine2(const Sales_data& rhs) {
	//把rhs的成员加到this对象的成员上
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	//返回调用该函数的对象
	return *this; 
}

istream& read(istream& is, Sales_data& item) {
	double price = 0;
	// 先输入图书编号为item.bookNo赋值
	// 再输入售出单位为item.units_sold赋值
	// 再输入价格为price赋值
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream& print(ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}


