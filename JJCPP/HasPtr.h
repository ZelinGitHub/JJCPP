//如果ifndef为真，将执行ifndef和endif之间的所有代码
#ifndef	HAS_PTR_H
#define HAS_PTR_H
#include <string>
class HasPtr
{
	friend void swap(HasPtr&, HasPtr&);
public:
	//默认构造函数
	HasPtr(const std::string& s = std::string())
		//构造函数初始值列表
		//初始化数据成员ps，ps指针指向动态分配的一个string对象
		//初始化数据成员i，i初始化为0
		:ps(new std::string(s)), i(0)
		//构造函数体
	{
	}
	//拷贝构造函数
	HasPtr(const HasPtr& p) :
		//构造函数初始值列表
		//初始化数据成员ps，ps指针指向动态分配的一个新的string对象，是原有的string对象的副本
		//初始化数据成员i，i初始化为原有的数据成员i的副本
		ps(new std::string(*(p.ps))), i(p.i)
		//构造函数体
	{
	}
	//拷贝赋值运算符的函数的声明
	HasPtr& operator=(const HasPtr&);
	//析构函数，销毁动态分配的string对象
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

