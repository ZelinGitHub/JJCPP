#include <string>
#include <vector>
using namespace std;

void fuckStringIteratorDereference() {
	string s("some string");
	//ȷ��s�ǿգ����stringΪ�գ���ôbegin��end������β�������
	if (s.begin() != s.end()) {
		//itָ��s�ĵ�һ���ַ�
		auto it = s.begin();
		//����ǰ�ַ��ĳɴ�д��ʽ
		*it = toupper(*it);
	}
}

void fuckStringIteratorPlus() {
	string s("some string");
	//���δ���s���ַ���ֱ�������ո�����������ַ�
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
		*it = toupper(*it);
	}
}

void fuckVectorConstIterator() {
	vector<int> v;
	auto it3 = v.cbegin();
}