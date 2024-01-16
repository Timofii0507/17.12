#include "lab.h"
#include <iostream>

using namespace std;

Student::Student() {}

void Student::inputStudentData() 
{
    cout << "Введіть ПІБ: ";
    getline(cin, fullName);
    cout << "Введіть дату народження: ";
    getline(cin, dateOfBirth);
    cout << "Введіть контактний телефон: ";
    getline(cin, contactNumber);
    cout << "Введіть місто студента: ";
    getline(cin, studentCity);
    cout << "Введіть країну студента: ";
    getline(cin, studentCountry);
    cout << "Введіть назву навчального закладу: ";
    getline(cin, institutionName);
    cout << "Введіть місто навчального закладу: ";
    getline(cin, institutionCity);
    cout << "Введіть країну навчального закладу: ";
    getline(cin, institutionCountry);
    cout << "Введіть номер групи: ";
    getline(cin, groupNumber);
}

void Student::displayStudentData() const 
{
    cout << "ПІБ: " << fullName << endl;
    cout << "Дата народження: " << dateOfBirth << endl;
    cout << "Контактний телефон: " << contactNumber << endl;
    cout << "Місто студента: " << studentCity << endl;
    cout << "Країна студента: " << studentCountry << endl;
    cout << "Назва навчального закладу: " << institutionName << endl;
    cout << "Місто навчального закладу: " << institutionCity << endl;
    cout << "Країна навчального закладу: " << institutionCountry << endl;
    cout << "Номер групи: " << groupNumber << endl;
}

string Student::getFullName(const Student& student) 
{
    return student.fullName;
}

string Student::getGroupNumber(const Student& student) 
{
    return student.groupNumber;
}
