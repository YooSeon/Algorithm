#include <iostream>

using namespace std;


//Quick_Sort
void quickSort(int *data, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j)
	{
		while (i <= end && data[i] <= data[key])
		{
			i++;
		}
		while (data[j] >= data[key] && j > start)
		{
			j--;
		}
		if (i > j)
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j+1,end);
}

int main()
{
	//Quick_Sort
	//�ð� ���⵵ O(N * logN)
	// Ư�� Pivot ������ �ΰ��� ���� ���� ������ ����

	int num = 10;
	int arr[10] = { 3,10,5,8,7,6,4,1,2,9 };


	quickSort(arr, 0, num - 1);




	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "   ";
	}

	return 0;
}