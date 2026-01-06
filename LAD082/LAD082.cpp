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
	const int SIZE = 5;
	Student students[SIZE]; // Array ของ struct
	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
		// TODO: cin >> students[i]...

		cout << "Enter of id ";
		cin >> students[i].id;
		cout << "Enter of Nickname ";
		cin >> students[i].nickname;
		cout << "Enter of lineID ";
		cin >> students[i].lineId;
		cout << "Enter of phone ";
		cin >> students[i].phone;
		cout << endl;
	}
	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++) {
		// TODO: cout << students[i]...
		cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << "\t";
		cout << "----------------------\n";
	}
	return 0;
}