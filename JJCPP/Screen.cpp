#include "Screen.h"
//可以在函数的定义处指定inline
//调用点的临时量的类型是一个引用
inline Screen& Screen::move(pos r, pos c) {
	//计算行的位置
	pos row = r * width;
	//在行内将光标移动到指定的列
	//使用隐式指针this访问数据成员cursor
	cursor = row + c;
	//以左值的形式返回对象
	//解引用得到this指针指向的对象，将这个对象传递给调用点的临时量
	return *this;
}

//这个函数已经在类的内部声明为inline
char Screen::get(pos r, pos c) const
{
	//计算行的位置
	pos row = r * width;
	//返回给定列的字符
	return contents[row + c];
}
inline Screen& Screen::set(char c) {
	contents[cursor] = c;
	return *this;

}
inline Screen& Screen::set(pos r, pos col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}