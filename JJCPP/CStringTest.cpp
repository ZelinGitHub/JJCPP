#include <cstring>
#include <iostream>
using namespace std;

void fuckCString() {
	//�����ַ�������ֵ
	int size1 = strlen("Hello,Hitler");
	char str1[] = { 'a','b','c','\0' };
	//����������
	int size2 = strlen(str1);
	char* str1Ptr = str1;
	//����char����ָ��
	int size3 = strlen(str1Ptr);

	char ca[] = { 'C','+','+' };
	//���ش���caû���Կ��ַ�����
	cout << strlen(ca) << endl;
}