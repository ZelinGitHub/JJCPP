void fuckConstPointerToConst() {
	const double pi = 3.14;
	//double* ptr = &pi; //����ptr��һ����ָͨ�룬����ָ����
	const double* cptr = &pi;
	//*cptr = 42; //����cptr�ǳ���ָ�룬�������ڸı�����ָ������ֵ
}

void fuckConstPointerToVar() {
	double dval = 3.14;
	const double* cptr = &dval; //��ȷ���ǲ���ͨ��cptr�ı�dval��ֵ
}