#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


class Student
{
	public :

	string name;
	int score;

	Student(string name, int score)
	{
		this->name = name;
		this->score = score;
	}

	bool operator < (Student &student)
	{
		return this->score < student.score;
	}
};

bool compare(int a, int b)
{
	return a > b;
}



// STL_Sort 함수
// 사용자의 의도대로 정렬 방식을 설정할 수 있어서 강력함



	//int a[10] = { 9,3,5,4,1,10,8,6,7,2 };

	//sort(a, a + 10);

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << a[i] << " ";
	//}

	//cout << endl;

	//sort(a, a + 10 , compare);

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << a[i] << " ";
	//}


	//데이터를 묶어서 정렬 하는 법


int main(void)
{

	Student students[] =
	{
		
		Student("에이",90),
		Student("비",93),
		Student("씨",97),
		Student("디",87),
		Student("이",92)


	};
	sort(students, students + 5);
	

	for (int i = 0; i < 5; i++)
	{
		cout << students[i].name << "  ";
	}

	return 0;
}
