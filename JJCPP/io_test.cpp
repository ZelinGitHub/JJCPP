#include <iostream>
using namespace std;

//���������淶����ĸ��д
int TestIO()
{
	//cout�����ö���������ostream
	//<<����������cout����
	std::cout << "Enter two numbers" << std::endl;
	int v1 = 0;
	int v2 = 0;
	//cin�����ö���������instream
	//>>����������cin����
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
