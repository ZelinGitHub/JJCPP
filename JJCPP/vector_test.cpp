#include <vector>
#include <string>
#include "Sales_data.h"

using namespace std;
/*
测试向量
*/
void TestVector()
{
	//vector是模板，模板是类或函数的创建说明
	//编译器根据模板创建类或函数的过程，被称为模板实例化
	//vector<int>是一个类，<int>是实例化类的额外信息
	//定义额外信息为int的空向量
	vector<int> ivec;
	//定义额外信息为Sales_data的空向量
	vector<Sales_data> sales_data_vector;
	//定义额外信息为vector的空向量
	vector<vector<string>>file;

	//空向量
	//vector<int> v2;
	//for (int i = 0; i != 100; ++i)
	//{
	//	//把元素依次放到向量末端
	//	v2.push_back(i);
	//}


}
