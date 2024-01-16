#include "lab2.h"

int Point::pointCount = 0;

Point::Point() 
{
    id = ++pointCount;
    inputCoordinates();
}

Point::~Point() 
{
}

void Point::inputCoordinates() 
{
    cout << "������ ���������� x: ";
    cin >> x;
    cout << "������ ���������� y: ";
    cin >> y;
    cout << "������ ���������� z: ";
    cin >> z;
}

void Point::displayCoordinates() const 
{
    cout << "���������� ����� " << id << ": (" << x << ", " << y << ", " << z << ")\n";
}

void Point::saveToFile(const string& fileName) const 
{
    ofstream outputFile(fileName);
    if (outputFile.is_open()) 
    {
        outputFile << x << " " << y << " " << z << "\n";
        outputFile.close();
        cout << "��� ������ ��������� � ����.\n";
    }
    else 
    {
        cerr << "�� ������� ������� ����.\n";
    }
}

void Point::loadFromFile(const string& fileName) 
{
    ifstream inputFile(fileName);
    if (inputFile.is_open())
    {
        inputFile >> x >> y >> z;
        inputFile.close();
        cout << "��� ������ ����������� � �����.\n";
    }
    else 
    {
        cerr << "�� ������� ������� ����.\n";
    }
}

double Point::getX() const 
{
    return x;
}

double Point::getY() const 
{
    return y;
}

double Point::getZ() const 
{
    return z;
}

int Point::getPointCount() 
{
    return pointCount;
}
