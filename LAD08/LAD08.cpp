#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineId;
	string phone;
};
int main() {
	Student s1; // ตัวแปรเดี่ยวของ struct
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << "Enter Of ID";
	cin >> s1.id;

	cout << "Enter Of Nickname";
	cin >> s1.nickname;

	cout << "Enter Of Line ID";
	cin >> s1.phone;

	cout << "\n=== Output Student 1 ===\n";
	cout << "ID: " << s1.id << "\n";
	cout << "Nickname: " << s1.nickname << "\n";
	cout << "Line ID: " << s1.lineId << "\n";
	cout << "Phone: " << s1.phone << "\n";

	return 0;
}