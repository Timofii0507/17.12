#include "lab2.h"

int Point::pointCount = 0;

Point::Point() 
{
    id = ++pointCount;
    inputCoordinates();
}

Point::~Point() {}

void Point::inputCoordinates() 
{
    cout << "Ââåä³òü êîîðäèíàòó x: ";
    cin >> x;
    cout << "Ââåä³òü êîîðäèíàòó y: ";
    cin >> y;
    cout << "Ââåä³òü êîîðäèíàòó z: ";
    cin >> z;
}

void Point::displayCoordinates() const 
{
    cout << "Êîîðäèíàòè òî÷êè " << id << ": (" << x << ", " << y << ", " << z << ")\n";
}

void Point::saveToFile(const string& fileName) const 
{
    ofstream outputFile(fileName);
    if (outputFile.is_open()) 
    {
        outputFile << x << " " << y << " " << z << "\n";
        outputFile.close();
        cout << "Äàí³ óñï³øíî çáåðåæåíî ó ôàéë.\n";
    }
    else 
    {
        cerr << "Íå âäàëîñÿ â³äêðèòè ôàéë.\n";
    }
}

void Point::loadFromFile(const string& fileName) 
{
    ifstream inputFile(fileName);
    if (inputFile.is_open())
    {
        inputFile >> x >> y >> z;
        inputFile.close();
        cout << "Äàí³ óñï³øíî çàâàíòàæåíî ç ôàéëó.\n";
    }
    else 
    {
        cerr << "Íå âäàëîñÿ â³äêðèòè ôàéë.\n";
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
