#ifndef	HAS_PTR2_H
#define HAS_PTR2_H
#include <string>
class HasPtr2
{
public:
	//默认构造函数
	HasPtr2(const std::string& s = std::string())
		//构造函数初始值列表。重置计数为1
		:ps(new std::string(s)), i(0), use(new std::size_t(1))
	{
	}
	//拷贝构造函数
	HasPtr2(const HasPtr2& p) :
		//构造函数初始值列表
		ps(p.ps), i(p.i), use(p.use)
		//构造函数体
	{
		++(*use);
	}
	//拷贝赋值运算符的函数的声明
	HasPtr2& operator=(const HasPtr2&);
	//析构函数的声明
	~HasPtr2();
private:
	std::string* ps;
	int i;
	std::size_t* use;
};

#endif

