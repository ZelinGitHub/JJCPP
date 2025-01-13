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

//拷贝构造函数：使用参数对象的成员初始化两个成员
//参数是常量引用，避免参数拷贝并可以接收
Message::Message(const Message& m) :contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);		//将本消息添加到指向m的Folder中
}



Message::~Message()
{
	remove_from_Folders();
}//注意，之前研究析构函数的时候了解过，析构函数体之后，还有一个隐式的销毁各个数据成员的部分。
//（1）编译器自动调用string的析构函数释放contents成员
//（2）编译器自动调用set的析构函数来清理集合的成员使用的内存。




