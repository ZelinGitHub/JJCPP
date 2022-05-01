#include <iostream>
int fuckLiteralConst() {
	double a = 3.14159;
	double b = 3.14159E0;
	if (a == b) {
		std::cout << "a等于b" << std::endl;
	}
	else {
		std::cout << "a不等于b" << std::endl;
	}
	double c = 0.;
	double d = 0e0;
	double e = .001;

	char f = 'a';
	std::cout << "a really, really long string literal " 
		"that spans two lines"<< std::endl;


	return 0;
}