#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    string contact;
    Phone phone;
};

struct Student {
    string id;
    string nickname;
    string lineID;
    Phone myContact;
    Parent parent;
};

void inputPhone(Phone& phone) {
    cout << "Enter Mobile Number: ";
    cin >> phone.mobile;
    cout << "Enter Home Number: ";
    cin >> phone.home;
}

void inputParent(Parent& parent) {
    cout << "Enter Parent's Name: ";
    cin >> parent.name;
    cout << "Enter Relationship: ";
    cin >> parent.relationship;
    cout << "Enter Parent's Contact Number: ";
    cin >> parent.contact;
    cout << "Enter Parent's Phone: ";
    inputPhone(parent.phone);
}
void inputStudent(Student& student) {
    cout << "Enter Student Information\n";
    cout << "ID: ";
    cin >> student.id;
    cout << "Nickname: ";
    cin >> student.nickname;
    cout << "LineID: ";
    cin >> student.lineID;
    inputPhone(student.myContact);
    inputParent(student.parent);
}

void printPhone(const Phone& phone) {
    cout << "Mobile Number: " << phone.mobile << endl;
    cout << "Home Number: " << phone.home << endl;
}

void printParent(const Parent& parent) {
    cout << "Parent's Name: " << parent.name << endl;
    cout << "Relationship: " << parent.relationship << endl;
    cout << "Contact Number: " << parent.contact << endl;
    cout << "\n===== Parent's Contact Info =====\n";
    printPhone(parent.phone);
}

void printStudent(const Student& student) {
    cout << "\n===== Student Information =====\n";
    cout << "ID: " << student.id << endl;
    cout << "Nickname: " << student.nickname << endl;
    cout << "LineID: " << student.lineID << endl;
    cout << "\n===== Student's Contact Info =====\n";
    printPhone(student.myContact);
    cout << "\n===== Parent's Information =====\n";
    printParent(student.parent);
}

int main() {
    Student student;
    inputStudent(student);
    printStudent(student);
    return 0;
}