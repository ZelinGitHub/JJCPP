#include <iostream>
using namespace std;

//函数命名规范首字母大写
int TestIO()
{
	//cout是内置对象，类型是ostream
	//<<操作符返回cout对象
	std::cout << "Enter two numbers" << std::endl;
	int v1 = 0;
	int v2 = 0;
	//cin是内置对象，类型是instream
	//>>操作符返回cin对象
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << std::endl;
	return 0;
}
int fuckInput() {
	int sum = 0, value = 0;
	while (std::cin >> value) {
		sum += value;
	}
	std::cout << "Sum is :" << sum << std::endl;
	return 0;
}
