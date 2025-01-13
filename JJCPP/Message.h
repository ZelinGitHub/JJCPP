#ifndef	MESSAGE_H
#define MESSAGE_H
#include <string>
#include <set>
using namespace std;
class Message {
	//声明一个友元类
	friend class Folder;
public:
	//这里我们只初始化了contents成员，没有初始化folders成员
	//folders被隐式初始化为空集合
	explicit Message(const std::string& str = "") :contents(str) {

	}
	//拷贝构造函数
	Message(const Message&);
	//拷贝赋值运算符
	Message& operator=(const Message&);
	//析构函数
	~Message();
	//从给定Folder集合中，添加/删除本Message
	void save(Folder&);
	void remove(Folder&);
private:
	//实际消息文本
	std::string contents;
	//包含本Message的Folder
	std::set<Folder*> folders;
	//拷贝构造函数、拷贝赋值运算符和析构函数所使用的工具函数
	//将本Message添加到指向参数的Folder中
	void add_to_Folders(const Message&);
	//从folders中的每个Folder中删除本Message
	void remove_from_Folders();
};



#endif
