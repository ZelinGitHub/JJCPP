//���ifndefΪ�棬��ִ��ifndef��endif֮������д���
#ifndef	HAS_PTR_H
#define HAS_PTR_H
#include <string>
class HasPtr
{
	friend void swap(HasPtr&, HasPtr&);
public:
	//Ĭ�Ϲ��캯��
	HasPtr(const std::string& s = std::string())
		//���캯����ʼֵ�б�
		//��ʼ�����ݳ�Աps��psָ��ָ��̬�����һ��string����
		//��ʼ�����ݳ�Աi��i��ʼ��Ϊ0
		:ps(new std::string(s)), i(0)
		//���캯����
	{
	}
	//�������캯��
	HasPtr(const HasPtr& p) :
		//���캯����ʼֵ�б�
		//��ʼ�����ݳ�Աps��psָ��ָ��̬�����һ���µ�string������ԭ�е�string����ĸ���
		//��ʼ�����ݳ�Աi��i��ʼ��Ϊԭ�е����ݳ�Աi�ĸ���
		ps(new std::string(*(p.ps))), i(p.i)
		//���캯����
	{
	}
	//������ֵ������ĺ���������
	HasPtr& operator=(const HasPtr&);
	//�������������ٶ�̬�����string����
	~HasPtr() {
		delete ps;
	}
private:
	std::string* ps;
	int i;
};
inline void swap(HasPtr& lhs, HasPtr& rhs) {
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}
#endif

