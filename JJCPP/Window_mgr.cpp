#include "Window_mgr.h"

//ScreenIndex是Window_mgr这个类的类型成员
void Window_mgr::clear(ScreenIndex i) {
	//s是一个Screen的引用，指向我们想清空的那个屏幕
	Screen& s = screens[i];
	//如果clear不是Screen的友元，将无法通过编译
	//因为此时clear将不能访问Screen的height、width和contents成员
	s.contents = string(s.height * s.width, ' ');
}