
#ifndef		SCREEN_H
#define SCREEN_H
#include <string>
#include <iostream>
using namespace std;
class Screen {
	//ָ����Ԫ��
	//Window_mgr�ĳ�Ա���Է���Screen���˽�в���
	friend class Window_mgr;
public:
	//�������ͳ�Ա
	typedef	std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) {
	}
	Screen& set(char);
	Screen& set(pos, pos, char);
	//��ʽ���������������ڲ��ĺ�����������
	char get()const {
		return contents[cursor];
	}
	//��������
	//��ʽ����
	inline char get(pos ht, pos wd)const;
	//��������
	Screen& move(pos r, pos c);
	//�ǳ�����Ա����
	Screen& display(std::ostream& os) {
		do_display(os);
		return *this;
	}
	//������Ա����
	//������Ա��������*thisʱ��ֻ��ʹ��const����
	//������Ա������thisָ���п���ָ��������
	const Screen& display(std::ostream& os) const {
		do_display(os);
		return *this;
	}
private:
	//������Ա����
	void do_display(std::ostream& os)const {
		os << contents;
	}
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

#endif

