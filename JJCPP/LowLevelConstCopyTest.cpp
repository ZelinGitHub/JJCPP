void fuckLowLevelConstCopy() {
	int i = 0;
	const int ci = 42;
	const int* p2 = &ci;
	const int* const p3 = p2;
	//int* p = p3; //����p3�ǵײ㳣����p����
	p2 = p3; //��ȷ��p2��p3���ǵײ㳣��
	p2 = &i; //��ȷ��int*��ת����const int*
	const int& r2 = i; //��ȷ��const int&���԰󶨵�һ����ͨint��
	//int& r = ci; //������ͨ��int&���ܰ󶨵�int������
}