#include <string>
#include <iostream>
using namespace std;

//�����Ķ���
int KT()
{
	return 0;
}

/*����������Ԫ�غ�β���ָ��*/
void print(const int* beg, const int* end)
{
	while (beg != end) {
		//���Ԫ��
		cout << *beg << endl;
		//ָ��ǰ��
		++beg;
	}
}

/*���������������*/
void print(int(&arr)[10])
{
	//��������
	for (auto elem : arr) {
		cout << elem << endl;
	}
}

/*�����Ƕ�ά����*/
void print(int(*matrix)[10], int rowSize) {

}
/*�����ǿɱ�����б�*/
void error_msg(int a, initializer_list<string> il)
{
	for (auto beg = il.begin(); beg != il.end(); ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
}

/*�������������õĺ���*/
//const string& shorterString(const string& s1, const string& s2)
//{
//	//����������s1��s2��һ�����ã�����������������
//	return s1.size() <= s2.size() ? s1 : s2;
//}
//
//const string& manip()
//{
//	string ret;
//	if (!ret.empty()) {
//		return ret;
//	}
//	else {
//		return "Empty";
//	}
//}
/*���������Ƿǳ������õĺ���*/
//char& get_val(string& str, string::size_type ix)
//{
//	return str[ix];
//}

/*�����ǳ������ã�����ֵ�ǳ�������*/
const string& fuckBitch(const string& s1)
{
	return s1;
}
/*���������ã�����������*/
string& fuckBitch(string& s1)
{
	/*ת���ǳ�������Ϊ�������ã����ú��������س�������*/
	auto& r = fuckBitch(const_cast<const string&>(s1));
	/*ת����������Ϊ�ǳ������ã���Ϊ��ǰ��������ֵ����*/
	return const_cast<string&>(r);
}
//����׳�
int fact(int val) {
	int ret = 1;
	while (val > 1) {
		//��ret��val�ĳ˻���ֵ��ret��Ȼ��val��1
		ret *= val--;
	}
	return ret;
}

int fuckFact() {
	int j = fact(5);
	//j����120��Ҳ����fact(5)�Ľ��
	std::cout << "5! is " << j << std::endl;
	return 0;
}