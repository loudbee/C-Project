#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int num;
	double kor;
	double eng;
	double math;
	double sum;
	double avg;

public:
	Student();
	Student(string name, int num, double kor, double eng, double math);
	void Setname(string name);
	string Getname();
	void Setnum(int num);
	int Getnum();
	void Setkor(double kor);
	double Getkor();
	void Seteng(double eng);
	double Geteng();
	void Setmath(double math);
	double Getmath();
	void Setsum();
	double Getsum();
	void Setavg();
	double Getavg();

	void Print_student();
};