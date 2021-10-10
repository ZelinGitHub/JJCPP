#include <string>
#include <iostream>
using namespace std;

void TestString()
{
	//默认初始化为空串
	string s1;

	//拷贝初始化
	string s5 = "hiya";

	//直接初始化
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
	//如果不为空
	if (s.begin() != s.end()) {
		//首元素迭代器
		auto it = s.begin();
		//*it解引用
		*it = toupper(*it);
	}
	//初始化迭代器为首元素迭代器
	//判断迭代器不到尾后位置
	//解引用迭代器判断元素值不是空格
	//迭代器位置自加前进
	//auto推断类型
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
	{
		//解引用改变元素的值
		*it = toupper(*it);
	}
}


void TestRangeFor()
{
	string s("Hello World!!!");
	//auto推断类型
	//范围for循环，Java叫做增强for循环
	for (auto c : s) {
		std::cout << c << std::endl;
	}

	//定义引用才能改变字符串中的字符
	for (auto& c : s) {
		//调用头文件ctype.h中的函数toupper改变字符的大小写
		//ctype.h是C语言的一个头文件
		//string的头文件中包含是这个头文件
		//ctype.h也可以用C++风格的名字cctype导入
		//c是一个引用，赋值操作将改变真正字符的值
		c = toupper(c);
		std::cout << c << std::endl;
	}
}
