#include "lab2.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point point1;
    point1.displayCoordinates();
    point1.saveToFile("point_data.txt");
    Point point2;
    point2.loadFromFile("point_data.txt");
    point2.displayCoordinates();
    cout << "Загальна кількість створених точок: " << Point::getPointCount() << endl;
    return 0;
}
