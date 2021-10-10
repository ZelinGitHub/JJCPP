#include <string>
#include <iostream>
using namespace std;

//函数的定义
int KT()
{
	return 0;
}

/*传递数组首元素和尾后的指针*/
void print(const int* beg, const int* end)
{
	while (beg != end) {
		//输出元素
		cout << *beg << endl;
		//指针前进
		++beg;
	}
}

/*参数是数组的引用*/
void print(int(&arr)[10])
{
	//遍历数组
	for (auto elem : arr) {
		cout << elem << endl;
	}
}

/*参数是二维数组*/
void print(int(*matrix)[10], int rowSize) {

}
/*参数是可变参数列表*/
void error_msg(int a, initializer_list<string> il)
{
	for (auto beg = il.begin(); beg != il.end(); ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;
}

/*返回类型是引用的函数*/
//const string& shorterString(const string& s1, const string& s2)
//{
//	//返回类型是s1或s2的一个引用，不会真正拷贝对象
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
/*返回类型是非常量引用的函数*/
//char& get_val(string& str, string::size_type ix)
//{
//	return str[ix];
//}

/*参数是常量引用，返回值是常量引用*/
const string& fuckBitch(const string& s1)
{
	return s1;
}
/*参数是引用，返回是引用*/
string& fuckBitch(string& s1)
{
	/*转换非常量引用为常量引用，调用函数，返回常量引用*/
	auto& r = fuckBitch(const_cast<const string&>(s1));
	/*转换常量引用为非常量引用，作为当前函数返回值返回*/
	return const_cast<string&>(r);
}
//计算阶乘
int fact(int val) {
	int ret = 1;
	while (val > 1) {
		//把ret和val的乘积赋值给ret，然后将val减1
		ret *= val--;
	}
	return ret;
}

int fuckFact() {
	int j = fact(5);
	//j等于120，也就是fact(5)的结果
	std::cout << "5! is " << j << std::endl;
	return 0;
}