#include <iostream>
#include <string>
using namespace std;

int main() {
	string studentID;
	string studentName;
	int score;
	string grade;

	cout << "Enter student ID : ";
	cin >> studentID;
	cin.ignore();
	cout << "Enter your name : ";
	getline(cin, studentName);
	cout << "Enter your score : ";
	cin >> score;
	if (score >= 90) {
		grade = "A";
	}
	else if (score >= 80) {
		grade = "B";
	}
	else if (score >= 70) {
		grade = "C";
	}
	else {
		grade = "F";
	}
	cout << "====== Student Report =======" << endl,
		cout << "Student ID: " << studentID << endl;
	cout << "Name: " << studentName << endl;
	cout << "Score: " << score << endl;
	cout << "Grade: " << grade << endl;
	return 0;
}