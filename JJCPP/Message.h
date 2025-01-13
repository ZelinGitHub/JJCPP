#ifndef	MESSAGE_H
#define MESSAGE_H
#include <string>
#include <set>
using namespace std;
class Message {
	//����һ����Ԫ��
	friend class Folder;
public:
	//��������ֻ��ʼ����contents��Ա��û�г�ʼ��folders��Ա
	//folders����ʽ��ʼ��Ϊ�ռ���
	explicit Message(const std::string& str = "") :contents(str) {

	}
	//�������캯��
	Message(const Message&);
	//������ֵ�����
	Message& operator=(const Message&);
	//��������
	~Message();
	//�Ӹ���Folder�����У����/ɾ����Message
	void save(Folder&);
	void remove(Folder&);
private:
	//ʵ����Ϣ�ı�
	std::string contents;
	//������Message��Folder
	std::set<Folder*> folders;
	//�������캯����������ֵ�����������������ʹ�õĹ��ߺ���
	//����Message��ӵ�ָ�������Folder��
	void add_to_Folders(const Message&);
	//��folders�е�ÿ��Folder��ɾ����Message
	void remove_from_Folders();
};



#endif
