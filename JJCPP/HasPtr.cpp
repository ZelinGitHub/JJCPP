#include "HasPtr.h"

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
	//拷贝string对象
	auto newp = new std::string(*(rhs.ps));
	//销毁旧的对象
	delete ps;
	//指向新的对象
	ps = newp;
	//拷贝内置类型的对象i
	i = rhs.i;
	//返回当前对象
	return *this;
}

////这样编写拷贝赋值运算符是错误的！
//HasPtr& HasPtr::operator=(const HasPtr& rhs)
//{
//	//销毁指针指向的string对象
//	delete ps;
//	//如果参数rhs和当前对象*this是同一个对象，我们就从已释放的内存中拷贝数据！
//	ps = new std::string(*(rhs.ps));
//	i = rhs.i;
//	return *this;
//}
