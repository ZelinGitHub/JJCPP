#include "Message.h"


void Message::save(Folder& f)
{

}

void Message::remove(Folder& f)
{

}

void Message::add_to_Folders(const Message& m)
{

}

void Message::remove_from_Folders()
{

}

//�������캯����ʹ�ò�������ĳ�Ա��ʼ��������Ա
//�����ǳ������ã�����������������Խ���
Message::Message(const Message& m) :contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);		//������Ϣ��ӵ�ָ��m��Folder��
}



Message::~Message()
{
	remove_from_Folders();
}//ע�⣬֮ǰ�о�����������ʱ���˽��������������֮�󣬻���һ����ʽ�����ٸ������ݳ�Ա�Ĳ��֡�
//��1���������Զ�����string�����������ͷ�contents��Ա
//��2���������Զ�����set�����������������ϵĳ�Աʹ�õ��ڴ档




