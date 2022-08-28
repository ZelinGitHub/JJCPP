#ifndef		WINDOW_MGR_H
#define WINDOW_MGR_H
#include "Screen.h"
#include <vector>
class Window_mgr {
public:
	//类的类型成员
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	//表示默认情况下一个Window_mgr包含一个标准尺寸的空白Screen
	std::vector<Screen> screens{ Screen(24,80,' ') };
};

#endif
