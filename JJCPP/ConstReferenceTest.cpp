#include <iostream>
using namespace std;

void fuckConstReference() {
	const int ci = 1024;
	const int& r1 = ci;
	//r1 = 42;//����
}

void fuckConstReferenceToConst() {
	//��������ֻ�ܸ�ֵ���������ã����ܸ�ֵ���ǳ�������
	const int ci = 1024;
	const int& r1 = ci; //��ȷ
	//int &r2 = ci; //������ͼ��һ���ǳ�������ָ��һ����������
}
void fuckReferenceToConst() {
	int ci = 1024;
	int& r = ci;
	const int& cr = r; //��ȷ
	cout << r << endl;
}

void fuckConstReferenceToVar() {
	int i = 42;
	int& r1 = i;
	const int& r2 = i;
	i = 1;//i��ֵ���޸�Ϊ1
	r1 = 0; //r1���ǳ�����i��ֵ���޸�Ϊ0
	//r2 = 0; //����r2��һ����������

}

void fuckConstReferenceDiffType() {
	//ʹ�ò�ͬ���͵ı�����ʼ����������
	double dval = 3.14;
	const int& ri = dval;
}

void fuckConstReferenceDiffType2() {
	//ʹ�ò�ͬ���͵ı�����ʼ����������
	double dval = 3.14;
	const int temp = dval;
	const int& ri = temp;
}

void fucReferenceDiffType() {
	double dval = 3.14;
	int temp = dval;
	int& ri = temp;
	//int& ri4 = dval3; //����
}



