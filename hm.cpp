#include "hm.h"

using namespace std;

Fraction::Fraction() : numerator(0), denominator(1) {}

void Fraction::inputFraction() 
{
    cout << "¬вед≥ть чисельник: ";
    cin >> numerator;
    do 
    {
        cout << "¬вед≥ть знаменник (не нуль): ";
        cin >> denominator;
    } while (denominator == 0);
}

Fraction Fraction::add(const Fraction& a, const Fraction& b) 
{
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return result;
}

Fraction Fraction::subtract(const Fraction& a, const Fraction& b) 
{
    Fraction result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return result;
}

Fraction Fraction::multiply(const Fraction& a, const Fraction& b) 
{
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    return result;
}

Fraction Fraction::divide(const Fraction& a, const Fraction& b) 
{
    Fraction result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    return result;
}

void Fraction::displayFraction() const 
{
    if (numerator == 0) 
    {
        cout << "0";
    }
    else if (numerator % denominator == 0) 
    {
        cout << numerator / denominator;
    }
    else 
    {
        cout << numerator << "/" << denominator;
    }
}

int Fraction::getNumerator() const 
{
    return numerator;
}

int Fraction::getDenominator() const 
{
    return denominator;
}
