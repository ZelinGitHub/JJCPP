#ifndef		ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;
class Account {
public:
	void calculate() {
		amount += amount * interestRate;
	}
	//定义静态成员函数
	static double rate() {
		return interestRate;
	}
	//声明静态成员函数
	static void rate(double);
private:
	//period是常量表达式
	static constexpr int period = 30;
	//使用常量表达式period
	double daily_tbl[period];
	string owner;
	double amount;
	//声明静态数据成员
	static double interestRate;
	//声明静态成员函数
	static double initRate();
};
#endif
