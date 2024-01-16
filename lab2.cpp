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
    cout << "Введіть координату x: ";
    cin >> x;
    cout << "Введіть координату y: ";
    cin >> y;
    cout << "Введіть координату z: ";
    cin >> z;
}

void Point::displayCoordinates() const 
{
    cout << "Координати точки " << id << ": (" << x << ", " << y << ", " << z << ")\n";
}

void Point::saveToFile(const string& fileName) const 
{
    ofstream outputFile(fileName);
    if (outputFile.is_open()) 
    {
        outputFile << x << " " << y << " " << z << "\n";
        outputFile.close();
        cout << "Дані успішно збережено у файл.\n";
    }
    else 
    {
        cerr << "Не вдалося відкрити файл.\n";
    }
}

void Point::loadFromFile(const string& fileName) 
{
    ifstream inputFile(fileName);
    if (inputFile.is_open())
    {
        inputFile >> x >> y >> z;
        inputFile.close();
        cout << "Дані успішно завантажено з файлу.\n";
    }
    else 
    {
        cerr << "Не вдалося відкрити файл.\n";
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
