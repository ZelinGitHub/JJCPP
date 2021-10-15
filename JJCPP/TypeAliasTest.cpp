#include "Sales_data.h"
typedef double wages;//wages是double的同义词
typedef wages base;//base是double的同义词
typedef wages* p;//p是double*的同义词

using SI = Sales_data;//SI是Sales_data的同义词

void fuckTypeAlias() {
	SI data;//等价于Sales_data data;
}

typedef char* pstring;
const pstring cstr = 0;
const char* cstr = 0;//是对const pstring cstr 的错误理解
char* const cstr = 0;//是对const pstring cstr 的正确理解