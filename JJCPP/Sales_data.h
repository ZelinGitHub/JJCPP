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
	//���幹�캯��
	//����Ĭ�Ϲ��캯��
	Sales_data() : units_sold(2) {

	}
	//Sales_data() = default;
	//���幹�캯����ֻ��ʼ��bookNo
	//������������������ԱĬ��ֵ������������ͻ򸴺����͵�������Աû����ʽ��ʼ������ᱨ��
	//Sales_data(const std::string& s) :bookNo(s){

	//}
	//���幹�캯������ʼ��bookNo��units_sold��revenue
	Sales_data(const std::string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p* n) {

	}
	//�������캯��
	Sales_data(std::istream&);

	//�����Ա����
	std::string isbn()const { return bookNo; }
	//������Ա����
	Sales_data& combine(const Sales_data&);
	Sales_data combine2(const Sales_data&);
	double avg_price() const;
	//�������ݳ�Ա
	std::string bookNo;
	unsigned int  units_sold=0 ;
	double revenue = 0.0;
}; 

//������ķǳ�Ա����
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream & print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
#endif
