#include <vector>
#include <string>
#include "Sales_data.h"

using namespace std;
/*
����vector
*/
void TestVector()
{
	//vector��ģ�壬ģ����������Ĵ���˵��
	//����������ģ�崴��������Ĺ��̣�����Ϊģ��ʵ����
	//vector<int>��һ���࣬<int>��ʵ������Ķ�����Ϣ
	//���������ϢΪint�Ŀ�vector
	vector<int> ivec;
	//���������ϢΪSales_data�Ŀ�vector
	vector<Sales_data> sales_data_vector;
	//���������ϢΪvector�Ŀ�vector
	vector<vector<string>>file;

	//��vector
	vector<int> v2;
	for (int i = 0; i != 100; ++i)
	{
		//��Ԫ�����ηŵ�vectorĩ��
		v2.push_back(i);
	}

}
