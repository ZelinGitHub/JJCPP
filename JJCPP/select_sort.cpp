
//ѡ������
void SelectSort(int array[], int n)
{



	//�����б�
	for (int i = 0; i < n - 1; i++)
	{
		//����
		int 	index_surplus_little = i;
		//����Ŀ��Ǳ�֮��ĽǱ�
		for (int j = i + 1; j < n; j++)
		{
			//�������ĽǱ�ָ��Ľ��С��Ŀ��Ǳ�ָ��Ľ��
			if (array[j] < array[index_surplus_little])
			{
				//����Ŀ��Ǳ�
				index_surplus_little = j;
			}
		}
		//���ʣ��Ǳ��У�ָ����С���ĽǱ꣬���ǵ�ǰ�Ǳ�
		//������ǰ�Ǳ�ͣ�ʣ��Ǳ���ָ����С���Ǳָ꣬��Ľ��
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