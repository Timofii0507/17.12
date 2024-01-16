#include "lab.h"
#include <iostream>

using namespace std;

Student::Student() {}

void Student::inputStudentData() 
{
    cout << "������ ϲ�: ";
    getline(cin, fullName);
    cout << "������ ���� ����������: ";
    getline(cin, dateOfBirth);
    cout << "������ ���������� �������: ";
    getline(cin, contactNumber);
    cout << "������ ���� ��������: ";
    getline(cin, studentCity);
    cout << "������ ����� ��������: ";
    getline(cin, studentCountry);
    cout << "������ ����� ����������� �������: ";
    getline(cin, institutionName);
    cout << "������ ���� ����������� �������: ";
    getline(cin, institutionCity);
    cout << "������ ����� ����������� �������: ";
    getline(cin, institutionCountry);
    cout << "������ ����� �����: ";
    getline(cin, groupNumber);
}

void Student::displayStudentData() const 
{
    cout << "ϲ�: " << fullName << endl;
    cout << "���� ����������: " << dateOfBirth << endl;
    cout << "���������� �������: " << contactNumber << endl;
    cout << "̳��� ��������: " << studentCity << endl;
    cout << "����� ��������: " << studentCountry << endl;
    cout << "����� ����������� �������: " << institutionName << endl;
    cout << "̳��� ����������� �������: " << institutionCity << endl;
    cout << "����� ����������� �������: " << institutionCountry << endl;
    cout << "����� �����: " << groupNumber << endl;
}

string Student::getFullName(const Student& student) 
{
    return student.fullName;
}

string Student::getGroupNumber(const Student& student) 
{
    return student.groupNumber;
}
