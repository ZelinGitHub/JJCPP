#include "HasPtr2.h"

HasPtr2& HasPtr2::operator=(const HasPtr2& rhs)
{
	//递增右侧运算对象的引用计数
	++(*(rhs.use));
	//递减当前对象的引用计数。如果引用计数为0，释放对象分配的成员
	if ((--(*use)) == 0) {
		delete ps;
		delete use;
	}
	//将数据从右侧运算对象到本对象
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}

HasPtr2::~HasPtr2() {
	//如果计数器变为0，释放string对象内存和计数器内存
	if ((--(*use)) == 0) {
		delete ps;
		delete use;
	}
}