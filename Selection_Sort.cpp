#include <iostream>
using namespace std;

//Selection_Sort

int main()
{
	int arr[10] = { 3,10,5,8,7,6,4,1,2,9 };
	int min = 9999; //처음 최소값 도출을 위해 큰 수를 넣어줌
	int index = 0;
	int temp = 0;

	for (int i = 0; i < 10; i++)
	{
		min = 9999;
		for (int j = i; j < 10; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}