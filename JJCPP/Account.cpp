#include "Account.h"
//���徲̬��Ա����
void Account::rate(double newRate) {
	interestRate = newRate;
}
//���徲̬���ݳ�Ա
double Account::interestRate = initRate();
//���徲̬��Ա����
double Account::initRate() {

}