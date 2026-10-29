#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student
{
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
	int scoreScience;
	int scoreSocialStadies;

	void show();
	void average();
};

void Student::show()
{
	cout << "名前 : " << name << endl
		<< "   国語 : " << scoreJapanese << " 点"
		<< ",  数学 : " << scoreMath << " 点"
		<< ",  英語 : " << scoreEnglish << " 点"
		<< ",  理科 : " << scoreScience << " 点"
		<< ",  社会 : " << scoreSocialStadies << " 点" << endl;
}

void Student::average()
{
	double average = (scoreJapanese + scoreMath + scoreEnglish + scoreScience + scoreSocialStadies) / 5.0;

	cout << " 平均 : " << average << " 点" << endl;
}

int main()
{
	Student student[] =
	{
		{ "赤井孝" , 73, 98, 86, 84, 90, },
		{ "笠井大介", 64, 45, 40, 37, 54, },
		{ "吉田叶", 76, 78, 69, 72, 80, },
	};
	int size = sizeof(student) / sizeof(*student);

	for (int i = 0; i < size; i++)
	{
		student[i].show();
		student[i].average();
	}
}