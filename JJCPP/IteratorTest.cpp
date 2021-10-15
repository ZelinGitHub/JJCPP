#include <string>
#include <vector>
using namespace std;

void fuckStringIteratorDereference() {
	string s("some string");
	//确保s非空，如果string为空，那么begin和end都返回尾后迭代器
	if (s.begin() != s.end()) {
		//it指向s的第一个字符
		auto it = s.begin();
		//将当前字符改成大写形式
		*it = toupper(*it);
	}
}

void fuckStringIteratorPlus() {
	string s("some string");
	//依次处理s的字符，直到遇到空格或处理完所有字符
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
		*it = toupper(*it);
	}
}

void fuckVectorConstIterator() {
	vector<int> v;
	auto it3 = v.cbegin();
}