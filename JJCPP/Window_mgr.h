#ifndef		WINDOW_MGR_H
#define WINDOW_MGR_H
#include "Screen.h"
#include <vector>
class Window_mgr {
public:
	//������ͳ�Ա
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	//��ʾĬ�������һ��Window_mgr����һ����׼�ߴ�Ŀհ�Screen
	std::vector<Screen> screens{ Screen(24,80,' ') };
};

#endif
