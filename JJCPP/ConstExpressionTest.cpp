
int get_size() {
	return 0;
}

int size() {
	return 0;
}

void fuckConstExpression() {
	const int max_file = 20;//20是常量表达式，max_file是常量表达式初始化的常量，max_file是常量表达式
	const int limit = max_file + 1;//max_file是常量表达式，1是常量表达式，limit是常量表达式
	int staff_size = 27;//staff_size不是常量，不是常量表达式
	const int sz = get_size();//sz是常量，但它的具体值直到运行时才能获取到，所以不是常量表达式
}

void fuckConstExpr() {
	constexpr int mf = 20;
	constexpr int limit = mf + 1;
	//constexpr int sz = size();//错误：只有当size是一个constexpr函数时，才是一条正确的声明语句
}
void fuckConstExprPointer() {
	const int* p = nullptr;//p是一个常指向的指针
	constexpr int* q = nullptr;//q是一个常量指针
}
