
int get_size() {
	return 0;
}

int size() {
	return 0;
}

void fuckConstExpression() {
	const int max_file = 20;//20�ǳ������ʽ��max_file�ǳ������ʽ��ʼ���ĳ�����max_file�ǳ������ʽ
	const int limit = max_file + 1;//max_file�ǳ������ʽ��1�ǳ������ʽ��limit�ǳ������ʽ
	int staff_size = 27;//staff_size���ǳ��������ǳ������ʽ
	const int sz = get_size();//sz�ǳ����������ľ���ֱֵ������ʱ���ܻ�ȡ�������Բ��ǳ������ʽ
}

void fuckConstExpr() {
	constexpr int mf = 20;
	constexpr int limit = mf + 1;
	//constexpr int sz = size();//����ֻ�е�size��һ��constexpr����ʱ������һ����ȷ���������
}
void fuckConstExprPointer() {
	const int* p = nullptr;//p��һ����ָ���ָ��
	constexpr int* q = nullptr;//q��һ������ָ��
}
