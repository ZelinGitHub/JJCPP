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

//�õ����̵��ַ���
//����1�Ͳ���2���ǳ�������
//����ֵҲ�ǳ�������
const string& shorterString(const string& s1, const string& s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}

//�õ����̵��ַ���
//����1�Ͳ���2������ͨ����
//����ֵ������ͨ����
string& shorterString(string& s1, string& s2) {
	//��һ�����ذ汾�ķ����Ĳ����ǳ������ã����Ҫ������һ�����ذ汾�ķ�������Ҫת������Ϊ����
	//����������������������Ȼ�ѡ��ǳ��������ķ�����Ҳ�ǵ�ǰ���������µݹ����
	//auto& r = shorterString(s1, s2);
	auto& r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
	//��һ�����ذ汾�ķ����ķ���ֵ�����ǳ������ã���Ϊ���ܿ����������õ���ͨ���ã����Ա��뽫����ֵת��Ϊ�ǳ����ſ��Է���
	return const_cast<string&>(r);
}


//�õ����̵��ַ���
//����1�Ͳ���2������ͨ����
//����ֵ������ͨ����
string& shorterString2(string& s1, string& s2) {
	//��ͼ���ó��������汾��shortString��������Ҫת������Ϊ������������������Ȼ�ѡ��ǳ��������ķ���
	//��ʹ��const_castҲ����ת������Ϊ����
	const string& sc1 = s1;
	const string& sc2 = s2;
	auto& r = shorterString(sc1, sc2);
	//���������汾��shortString�����ķ���ֵ�����ǳ������ã���Ϊ���ܿ����������õ���ͨ���ã����Ա��뽫����ֵת��Ϊ�ǳ����ſ��Է���
	return const_cast<string&>(r);
}
bool lengthCompare(const string&, const  string&) {
	return false;
}
string::size_type sumLength(const string&, const  string&) {
	return 0;
}
bool cstringCompare(const char*, const  char*) {
	return false;
}


bool (*pf)(const string&, const string&);


void fuckFunctionPointer() {

	//��ʼ������ָ��
	pf = &lengthCompare;
	//ȡ��ַ������ʡ��
	pf = lengthCompare;
	//ʹ�ú���ָ����ú���
	bool b1=(*pf)("hello", "fuck u");
	//�����ò�������ʡ��
	bool b2=pf("hello", "fuck u");
	//�ȼ۵ĺ�������
	bool b3= lengthCompare("hello", "fuck u");
	//��ʼ��Ϊ��ָ��
	pf = 0;
	//��ʼ��Ϊ��ָ��
	pf = nullptr;

	//pf = sumLength;	//���󣺷������Ͳ�ƥ�䣬����ͬһ����������
	//pf = cstringCompare;	//�����β����Ͳ�ƥ�䣬����ͬһ����������

}


