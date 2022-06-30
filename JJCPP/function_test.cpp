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

//得到更短的字符串
//参数1和参数2都是常量引用
//返回值也是常量引用
const string& shorterString(const string& s1, const string& s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}

//得到更短的字符串
//参数1和参数2都是普通引用
//返回值而是普通引用
string& shorterString(string& s1, string& s2) {
	//另一个重载版本的方法的参数是常量引用，如果要调用另一个重载版本的方法，需要转换参数为常量
	//如果不这样做，编译器优先会选择非常量参数的方法，也是当前方法，导致递归调用
	//auto& r = shorterString(s1, s2);
	auto& r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
	//另一个重载版本的方法的返回值类型是常量引用，因为不能拷贝常量引用到普通引用，所以必须将返回值转换为非常量才可以返回
	return const_cast<string&>(r);
}


//得到更短的字符串
//参数1和参数2都是普通引用
//返回值而是普通引用
string& shorterString2(string& s1, string& s2) {
	//试图调用常量参数版本的shortString函数，需要转换参数为常量，否则编译器优先会选择非常量参数的方法
	//不使用const_cast也可以转换变量为常量
	const string& sc1 = s1;
	const string& sc2 = s2;
	auto& r = shorterString(sc1, sc2);
	//常量参数版本的shortString函数的返回值类型是常量引用，因为不能拷贝常量引用到普通引用，所以必须将返回值转换为非常量才可以返回
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

	//初始化函数指针
	pf = &lengthCompare;
	//取地址符可以省略
	pf = lengthCompare;
	//使用函数指针调用函数
	bool b1=(*pf)("hello", "fuck u");
	//解引用操作可以省略
	bool b2=pf("hello", "fuck u");
	//等价的函数调用
	bool b3= lengthCompare("hello", "fuck u");
	//初始化为空指针
	pf = 0;
	//初始化为空指针
	pf = nullptr;

	//pf = sumLength;	//错误：返回类型不匹配，不是同一个函数类型
	//pf = cstringCompare;	//错误：形参类型不匹配，不是同一个函数类型

}


