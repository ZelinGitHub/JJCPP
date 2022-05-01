void fuckLowLevelConstCopy() {
	int i = 0;
	const int ci = 42;
	const int* p2 = &ci;
	const int* const p3 = p2;
	//int* p = p3; //错误：p3是底层常量，p不是
	p2 = p3; //正确：p2和p3都是底层常量
	p2 = &i; //正确：int*能转换成const int*
	const int& r2 = i; //正确：const int&可以绑定到一个普通int上
	//int& r = ci; //错误：普通的int&不能绑定到int常量上
}