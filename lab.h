#ifndef LAB_H
#define LAB_H

#include <string>
#include <Windows.h>

using namespace std;

class Student 
{
private:
    string fullName;
    string dateOfBirth;
    string contactNumber;
    string studentCity;
    string studentCountry;
    string institutionName;
    string institutionCity;
    string institutionCountry;
    string groupNumber;

public:
    Student();
    void inputStudentData();
    void displayStudentData() const;
    static string getFullName(const Student& student);
    static string getGroupNumber(const Student& student);
};

#endif 
