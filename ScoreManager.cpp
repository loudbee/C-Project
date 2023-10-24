#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Student.h"
#include "ScoreManager.h"
using namespace std;

ScoreManager::ScoreManager()
{
	char choice;
	string s;
	int no;
	double k, e, m;

	cin >> choice;
	while (true)
	{
		if (choice == 'q')
		{
			break;
		}
		else
		{
			cout << "이름, 학번, 국어, 영어, 수학 점수를 입력해주세요";
			cin >> s >> no >> k >> e >> m;

			mans.push_back(Student(s, no, k, e, m));
		}
		

		
	}
}

void ScoreManager::Print_All()
{
	for (i_mans = mans.begin(); i_mans != mans.end(); i_mans++)
	{
		(*i_mans).Print_student();
	}
}