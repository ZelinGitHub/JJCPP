#include "HasPtr.h"

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
	//����string����
	auto newp = new std::string(*(rhs.ps));
	//���پɵĶ���
	delete ps;
	//ָ���µĶ���
	ps = newp;
	//�����������͵Ķ���i
	i = rhs.i;
	//���ص�ǰ����
	return *this;
}

////������д������ֵ������Ǵ���ģ�
//HasPtr& HasPtr::operator=(const HasPtr& rhs)
//{
//	//����ָ��ָ���string����
//	delete ps;
//	//�������rhs�͵�ǰ����*this��ͬһ���������Ǿʹ����ͷŵ��ڴ��п������ݣ�
//	ps = new std::string(*(rhs.ps));
//	i = rhs.i;
//	return *this;
//}
