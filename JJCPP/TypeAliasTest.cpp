#include "Sales_data.h"
typedef double wages;//wages��double��ͬ���
typedef wages base;//base��double��ͬ���
typedef wages* p;//p��double*��ͬ���

using SI = Sales_data;//SI��Sales_data��ͬ���

void fuckTypeAlias() {
	SI data;//�ȼ���Sales_data data;
}

typedef char* pstring;
const pstring cstr = 0;
const char* cstr = 0;//�Ƕ�const pstring cstr �Ĵ������
char* const cstr = 0;//�Ƕ�const pstring cstr ����ȷ���