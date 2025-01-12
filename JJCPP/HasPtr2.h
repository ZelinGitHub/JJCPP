#ifndef	HAS_PTR2_H
#define HAS_PTR2_H
#include <string>
class HasPtr2
{
public:
	//Ĭ�Ϲ��캯��
	HasPtr2(const std::string& s = std::string())
		//���캯����ʼֵ�б����ü���Ϊ1
		:ps(new std::string(s)), i(0), use(new std::size_t(1))
	{
	}
	//�������캯��
	HasPtr2(const HasPtr2& p) :
		//���캯����ʼֵ�б�
		ps(p.ps), i(p.i), use(p.use)
		//���캯����
	{
		++(*use);
	}
	//������ֵ������ĺ���������
	HasPtr2& operator=(const HasPtr2&);
	//��������������
	~HasPtr2();
private:
	std::string* ps;
	int i;
	std::size_t* use;
};

#endif

