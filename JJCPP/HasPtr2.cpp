#include "HasPtr2.h"

HasPtr2& HasPtr2::operator=(const HasPtr2& rhs)
{
	//�����Ҳ������������ü���
	++(*(rhs.use));
	//�ݼ���ǰ��������ü�����������ü���Ϊ0���ͷŶ������ĳ�Ա
	if ((--(*use)) == 0) {
		delete ps;
		delete use;
	}
	//�����ݴ��Ҳ�������󵽱�����
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}

HasPtr2::~HasPtr2() {
	//�����������Ϊ0���ͷ�string�����ڴ�ͼ������ڴ�
	if ((--(*use)) == 0) {
		delete ps;
		delete use;
	}
}