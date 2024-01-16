#ifndef LAB2_H
#define LAB2_H

#include <iostream>
#include <fstream>

using namespace std;

class Point 
{
private:
    static int pointCount;
    int id;
    double x, y, z;

public:
    Point();
    ~Point();
    void inputCoordinates();
    void displayCoordinates() const;
    void saveToFile(const string& fileName) const;
    void loadFromFile(const string& fileName);
    double getX() const;
    double getY() const;
    double getZ() const;
    static int getPointCount();
};

#endif 
