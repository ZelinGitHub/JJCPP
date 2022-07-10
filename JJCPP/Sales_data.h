#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
using namespace std;


/*
��ͷ�ļ�����ṹ�塢��
ͷ�ļ�����һ�������һ��
ͷ�ļ������ԭ�ⲻ�����Ƶ�Դ�ļ�
*/
struct Sales_data {
	//�����Ա����
	std::string isbn()const { return bookNo; }
	//������Ա����
	Sales_data& compare(const Sales_data&);
	double avg_price() const;
	//�������ݳ�Ա
	std::string bookNo;
	unsigned int  units_sold = 0;
	double revenue = 0.0;
}; 

//�����ǳ�Ա����
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream & print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
#endif
