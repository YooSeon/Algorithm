#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//ST_Sort2
//��� ���̺귯���� ����� ����
//Ŭ������ ���� ���� �ʰ� �ΰ����� ���ڸ� ������ ��� ���̺귯���� �����(�ڷᱸ��)


//int main()
//{
//	vector<pair<int, string>> v;
//
//	v.push_back(pair<int, string>(90, "A"));
//	v.push_back(pair<int, string>(85, "B"));
//	v.push_back(pair<int, string>(82, "C"));
//	v.push_back(pair<int, string>(98, "D"));
//	v.push_back(pair<int, string>(79, "E"));
//
//	sort(v.begin(), v.end());
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i].second << " ";
//	}
//
//
//	return 0;
//}

bool compare(pair<string, pair<int, int>> a,
	pair<string, pair<int, int>> b)
{
	if (a.second.first == b.second.first)
	{
		return a.second.second > b.second.second;
	}
	else
	{
		return a.second.first > b.second.first;
	}
}


//���� �� ����� ����

int main()
{

	vector<pair<string, pair<int,int>>> v;

	v.push_back(pair<string, pair<int, int>>("A", pair<int, int>(90, 19961222)));
	v.push_back(pair<string, pair<int, int>>("B", pair<int, int>(97, 19930518)));
	v.push_back(pair<string, pair<int, int>>("C", pair<int, int>(95, 19930203)));
	v.push_back(pair<string, pair<int, int>>("D", pair<int, int>(90, 19921207)));
	v.push_back(pair<string, pair<int, int>>("E", pair<int, int>(88, 19900302)));

	sort(v.begin(), v.end(), compare);


	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " ";
	}



}