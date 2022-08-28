#include "Screen.h"
//�����ں����Ķ��崦ָ��inline
//���õ����ʱ����������һ������
inline Screen& Screen::move(pos r, pos c) {
	//�����е�λ��
	pos row = r * width;
	//�����ڽ�����ƶ���ָ������
	//ʹ����ʽָ��this�������ݳ�Աcursor
	cursor = row + c;
	//����ֵ����ʽ���ض���
	//�����õõ�thisָ��ָ��Ķ��󣬽�������󴫵ݸ����õ����ʱ��
	return *this;
}

//��������Ѿ�������ڲ�����Ϊinline
char Screen::get(pos r, pos c) const
{
	//�����е�λ��
	pos row = r * width;
	//���ظ����е��ַ�
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