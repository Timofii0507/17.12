#ifndef HM_H
#define HM_H

#include <iostream>
#include <Windows.h>

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    void inputFraction();
    static Fraction add(const Fraction& a, const Fraction& b);
    static Fraction subtract(const Fraction& a, const Fraction& b);
    static Fraction multiply(const Fraction& a, const Fraction& b);
    static Fraction divide(const Fraction& a, const Fraction& b);
    void displayFraction() const;
    int getNumerator() const;
    int getDenominator() const;
};

#endif
