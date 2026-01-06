#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string id;
    string Nickname;
    string LineID;
    string Phone;
};

void printStudent(Student s1)
{
    cout << "ID: " << s1.id << "\n";
    cout << "Nickname: " << s1.Nickname << "\n";
    cout << "Line ID: " << s1.LineID << "\n";
    cout << "Phone: " << s1.Phone << "\n";
}
int main() {
    Student s1;
    cout << "=== Input Student 1 ===\n";

    cout << "Enter of id: ";
    cin >> s1.id;
    cout << "Enter of Nickname: ";
    cin >> s1.Nickname;
    cout << "Line ID: ";
    cin >> s1.LineID;
    cout << "Phone: ";
    cin >> s1.Phone;

    cout << "\n=== Output (from function) ===\n";

    printStudent(s1);

    return 0;
}
