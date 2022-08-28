#ifndef		ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;
class Account {
public:
	void calculate() {
		amount += amount * interestRate;
	}
	//���徲̬��Ա����
	static double rate() {
		return interestRate;
	}
	//������̬��Ա����
	static void rate(double);
private:
	//period�ǳ������ʽ
	static constexpr int period = 30;
	//ʹ�ó������ʽperiod
	double daily_tbl[period];
	string owner;
	double amount;
	//������̬���ݳ�Ա
	static double interestRate;
	//������̬��Ա����
	static double initRate();
};
#endif
