#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student() { }
Student::Student(string name, int num, double kor, double eng, double math) : name(name), num(num), kor(kor), eng(eng), math(math)
{
	sum = kor + eng + math;
	avg = sum / 3;
}
//name---get,set
void Student::Setname(string name)
{
	this->name = name;
}
string Student::Getname()
{
	return name;
}
//num---get,set
void Student::Setnum(int num)
{
	this->num = num;
}
int Student::Getnum()
{
	return num;
}
//kor---get,set
void Student::Setkor(double kor)
{
	this->kor = kor;
}
double Student::Getkor()
{
	return kor;
}
//eng---get,set
void Student::Seteng(double eng)
{
	this->eng = eng;
}
double Student::Geteng()
{
	return eng;
}
//math---get,set
void Student::Setmath(double math)
{
	this->math = math;
}
double Student::Getmath()
{
	return math;
}
//sum---get,set
void Student::Setsum()
{
	sum = kor + eng + math;
}
double Student::Getsum()
{
	return sum;
}
void Student::Setavg()
{
	avg = sum / 3;
}
double Student::Getavg()
{
	return avg;
}

void Student::Print_student()
{
	cout << "이름 :	" << name << ", 국어 : " << kor << ", 영어 : " << eng << ", 수학 : " << math << ", 평균 : " << avg << endl;
}