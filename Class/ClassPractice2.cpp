#include <iostream>
using namespace std;

class SubjectScore
{
private:
	int scoreJ;

public:
	int scoreM;
	int scoreE;

public:
	SubjectScore();
	int sum();
	void setScoreJ(int score);
	void show() const;
};

SubjectScore::SubjectScore()
{
	scoreJ = 0;
	scoreM = 30;
	scoreE = 30;
}

int SubjectScore::sum()
{
	return scoreJ + scoreM + scoreE;
}

void SubjectScore::setScoreJ(int score)
{
	scoreJ = score;
}

void SubjectScore::show() const
{
	cout << scoreJ << endl
		<< scoreM << endl
		<< scoreE << endl;
}

int main()
{
	//SubjectScore scores[5];

	//scores[4].setScoreJ(30);

	//cout << scores[4].sum() << endl
	//	<< scores[3].sum() << endl;

	const SubjectScore score;

	// score.setScoreJ(30);

	score.show();
}