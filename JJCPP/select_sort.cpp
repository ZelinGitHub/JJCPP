
//选择排序
void SelectSort(int array[], int n)
{



	//遍历列表
	for (int i = 0; i < n - 1; i++)
	{
		//假设
		int 	index_surplus_little = i;
		//遍历目标角标之后的角标
		for (int j = i + 1; j < n; j++)
		{
			//如果后面的角标指向的结点小于目标角标指向的结点
			if (array[j] < array[index_surplus_little])
			{
				//更新目标角标
				index_surplus_little = j;
			}
		}
		//如果剩余角标中，指向最小结点的角标，不是当前角标
		//交换当前角标和，剩余角标中指向最小结点角标，指向的结点
		if (index_surplus_little != i)
		{
			int temp = array[i];
			array[i] = array[index_surplus_little];
			array[index_surplus_little] = temp;
		}
	}
}

void selectionSortIdiot(int a[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < len; j++)    
		{
			if (a[j] < a[min])   
			{
				min = j;   
			}
		}
		int temp = a[min];  
		a[min] = a[i];
		a[i] = temp;
	}
}

void selectSortShit(int a[],int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n ; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}

	}
}