#include "Window_mgr.h"

//ScreenIndex��Window_mgr���������ͳ�Ա
void Window_mgr::clear(ScreenIndex i) {
	//s��һ��Screen�����ã�ָ����������յ��Ǹ���Ļ
	Screen& s = screens[i];
	//���clear����Screen����Ԫ�����޷�ͨ������
	//��Ϊ��ʱclear�����ܷ���Screen��height��width��contents��Ա
	s.contents = string(s.height * s.width, ' ');
}