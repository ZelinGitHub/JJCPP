#include <iostream>
using namespace std;

/*插入排序*/
void insertion_sort(int arr[], int len) {
	//遍历数组，从1到len-1
	for (int i = 1; i < len; i++) {
		//当前角标结点，保存为临时变量key，也是待插入结点
		int key = arr[i];
		//创建游标j，初始化为当前角标的前驱游标
		int j = i - 1;
		//游标最小值为0
		//如果游标指向结点大于待插入结点
		while ((j >= 0) && (arr[j] >key )) {
			//游标指向的结点，赋值给游标的后继角标
			arr[j + 1] = arr[j];
			//游标左移
			j--;
		}
		//待插入结点key找到正确的角标j+1
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
		//保存结点
		int value = a[i];
		//前驱
		int pre = i - 1;
		//寻找正确位置
		while (pre >= 0 && a[pre] > a[i])
		{
			a[pre + 1] = a[pre];
			pre--;
		}
		//正确位置
		int right = pre + 1;
		//插入
		a[right] = value;
	}
}

void InsertSortTest()
{
	std::cout << "原数组：" <<endl;
	int r[] = { 3,2,1,666,8888,34,100,25,0,980721,17 };
	for (int i = 0; i < 11; i++)
	{
		std::cout << r[i] << " ";
	}
	std::cout << endl;
	std::cout << "插入排序后：" << endl;
	InsertSortShit(r, 11);
	for (int i = 0; i < 11; i++)
	{
		std::cout << r[i] << " ";
	}
	std::cout << endl;
	std::cin.get();
}

