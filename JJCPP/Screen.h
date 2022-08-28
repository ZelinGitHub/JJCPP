
#ifndef		SCREEN_H
#define SCREEN_H
#include <string>
#include <iostream>
using namespace std;
class Screen {
	//指定友元类
	//Window_mgr的成员可以访问Screen类的私有部分
	friend class Window_mgr;
public:
	//定义类型成员
	typedef	std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c) {
	}
	Screen& set(char);
	Screen& set(pos, pos, char);
	//隐式内联，定义在类内部的函数是内联的
	char get()const {
		return contents[cursor];
	}
	//函数声明
	//显式内联
	inline char get(pos ht, pos wd)const;
	//函数声明
	Screen& move(pos r, pos c);
	//非常量成员函数
	Screen& display(std::ostream& os) {
		do_display(os);
		return *this;
	}
	//常量成员函数
	//常量成员函数返回*this时，只能使用const引用
	//常量成员函数的this指针有可能指向常量对象
	const Screen& display(std::ostream& os) const {
		do_display(os);
		return *this;
	}
private:
	//常量成员函数
	void do_display(std::ostream& os)const {
		os << contents;
	}
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

#endif

