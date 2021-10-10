#include <iostream>
using namespace std;

/*��������*/
void insertion_sort(int arr[], int len) {
	//�������飬��1��len-1
	for (int i = 1; i < len; i++) {
		//��ǰ�Ǳ��㣬����Ϊ��ʱ����key��Ҳ�Ǵ�������
		int key = arr[i];
		//�����α�j����ʼ��Ϊ��ǰ�Ǳ��ǰ���α�
		int j = i - 1;
		//�α���СֵΪ0
		//����α�ָ������ڴ�������
		while ((j >= 0) && (arr[j] >key )) {
			//�α�ָ��Ľ�㣬��ֵ���α�ĺ�̽Ǳ�
			arr[j + 1] = arr[j];
			//�α�����
			j--;
		}
		//��������key�ҵ���ȷ�ĽǱ�j+1
		arr[j + 1] = key;
	}
}

void insert_sort_idiot(int arr[], int len)
{
	for (int i = 0; i < len; i++) {
		int key = arr[i];
		int j = i - 1;
		while ((j >= 0) && (arr[j] > key)) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}


void InsertSortShit(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		//������
		int value = a[i];
		//ǰ��
		int pre = i - 1;
		//Ѱ����ȷλ��
		while (pre >= 0 && a[pre] > a[i])
		{
			a[pre + 1] = a[pre];
			pre--;
		}
		//��ȷλ��
		int right = pre + 1;
		//����
		a[right] = value;
	}
}

void InsertSortTest()
{
	std::cout << "ԭ���飺" <<endl;
	int r[] = { 3,2,1,666,8888,34,100,25,0,980721,17 };
	for (int i = 0; i < 11; i++)
	{
		std::cout << r[i] << " ";
	}
	std::cout << endl;
	std::cout << "���������" << endl;
	InsertSortShit(r, 11);
	for (int i = 0; i < 11; i++)
	{
		std::cout << r[i] << " ";
	}
	std::cout << endl;
	std::cin.get();
}

