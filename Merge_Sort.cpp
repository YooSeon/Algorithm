#include <iostream>
#include "���.h"

using namespace std;

//Merge Sort ���� ���� ����� �̿��� �˰��� O(N * LogN)�� �ð� ���⵵
//������ ���� �� ��ĥ�� ������ ���� ������ �־��� ��쿡�� �ð� ���⵵�� �����ϴ�


int num = 8;
int sorted[8]; //���� �迭�� �ݵ�� ���� ������ �����ؾ���

void merge(int a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;

	//���� ������� �迭�� ����
	while (i <= middle && j <= n)
	{
		if (a[i] <= a[j])
		{
			sorted[k] = a[i];
			j++;
		}
		else
		{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	// ���� ������ ����
	if (i > middle)
	{
		for (int t = i; t <= middle; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}

	// ���ĵ� �迭�� ����
	for (int t = m; t <= n; t++)
	{
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n)
{
	if (m < n)
	{
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	}
}
