#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include "Student.h"
using namespace std;

class ScoreManager
{
public:
	vector<Student> mans;
	vector<Student>::iterator i_mans;
	int rank;

	ScoreManager();

	void Print_All();
};