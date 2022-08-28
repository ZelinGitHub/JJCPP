#include "Sales_data.h"

//���캯���Ķ���
//�����������::��ʾ�������������
Sales_data::Sales_data(std::istream& is) {
	read(is, *this);
}

//��Ա�����Ķ���
//�����������::��ʾ�������������
double Sales_data::avg_price() const {
	if (units_sold) {
		return revenue / units_sold;
	}else {
		return 0;
	}
}
//��Ա�����Ķ���
Sales_data& Sales_data::combine(const Sales_data& rhs) {
	//��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	//���ص��øú����Ķ���
	return *this; 
}//��Ա�����Ķ���
const Sales_data& Sales_data::combine4(const Sales_data& rhs) const {
	//���ص��øú����Ķ���
	return *this; 
}
//��Ա�����Ķ���
Sales_data Sales_data::combine2(const Sales_data& rhs) {
	//��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	//���ص��øú����Ķ���
	return *this; 
}
//��Ա�����Ķ���
Sales_data Sales_data::combine3(const Sales_data& rhs) const{
	//���ص��øú����Ķ���
	return *this; 
}
//��Ա�����Ķ���
const Sales_data Sales_data::combine5(const Sales_data& rhs) const{
	//���ص��øú����Ķ���
	return *this; 
}
//��ķǳ�Ա�����Ķ���
istream& read(istream& is, Sales_data& item) {
	double price = 0;
	// ������ͼ����Ϊitem.bookNo��ֵ
	// �������۳���λΪitem.units_sold��ֵ
	// ������۸�Ϊprice��ֵ
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
//��ķǳ�Ա�����Ķ���
ostream& print(ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << " " << item.revenue << " " << item.avg_price();
	return os;
}
//��ķǳ�Ա�����Ķ���
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}


