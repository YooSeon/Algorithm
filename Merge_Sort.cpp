#include <iostream>
#include "헤더.h"

using namespace std;

//Merge Sort 분할 정복 방법을 이용한 알고리즘 O(N * LogN)의 시간 복잡도
//반으로 나눈 뒤 합칠때 정렬을 진행 함으로 최악의 경우에도 시간 복잡도는 동일하다


int num = 8;
int sorted[8]; //정렬 배열은 반드시 전역 변수로 선언해야함

void merge(int a[], int m, int middle, int n)
{
	int i = m;
	int j = middle + 1;
	int k = m;

	//작은 수서대로 배열에 삽입
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
	// 남은 데이터 삽입
	if (i > middle)
	{
		for (int t = i; t <= middle; t++)
		{
			sorted[k] = a[t];
			k++;
		}
	}

	// 정렬된 배열을 삽입
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
