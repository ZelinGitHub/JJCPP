#include <string>
#include <iostream>
using namespace std;

void TestString()
{
	//Ĭ�ϳ�ʼ��Ϊ�մ�
	string s1;

	//������ʼ��
	string s5 = "hiya";

	//ֱ�ӳ�ʼ��
	string s6("hiya");

	string str1("z");
	std::cout << str1 + "\n";
	string str2("Son of a bitch!");
	str1 = str2;
	std::cout << str1 + "Hello World!\n";
}



void TestInterator()
{
	string s("abcdefghijklmn");
	//�����Ϊ��
	if (s.begin() != s.end()) {
		//��Ԫ�ص�����
		auto it = s.begin();
		//*it������
		*it = toupper(*it);
	}
	//��ʼ��������Ϊ��Ԫ�ص�����
	//�жϵ���������β��λ��
	//�����õ������ж�Ԫ��ֵ���ǿո�
	//������λ���Լ�ǰ��
	//auto�ƶ�����
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
	{
		//�����øı�Ԫ�ص�ֵ
		*it = toupper(*it);
	}
}


void TestRangeFor()
{
	string s("Hello World!!!");
	//auto�ƶ�����
	//��Χforѭ����Java������ǿforѭ��
	for (auto c : s) {
		std::cout << c << std::endl;
	}

	//�������ò��ܸı��ַ����е��ַ�
	for (auto& c : s) {
		//����ͷ�ļ�ctype.h�еĺ���toupper�ı��ַ��Ĵ�Сд
		//ctype.h��C���Ե�һ��ͷ�ļ�
		//string��ͷ�ļ��а��������ͷ�ļ�
		//ctype.hҲ������C++��������cctype����
		//c��һ�����ã���ֵ�������ı������ַ���ֵ
		c = toupper(c);
		std::cout << c << std::endl;
	}
}
