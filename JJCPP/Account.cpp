#include "Account.h"
//定义静态成员函数
void Account::rate(double newRate) {
	interestRate = newRate;
}
//定义静态数据成员
double Account::interestRate = initRate();
//定义静态成员函数
double Account::initRate() {

}