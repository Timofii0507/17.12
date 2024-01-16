#include "hm.h"

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction fraction1, fraction2;
    cout << "Введіть дані для першого дробу:\n";
    fraction1.inputFraction();
    cout << "\nВведіть дані для другого дробу:\n";
    fraction2.inputFraction();
    cout << "\nПерший дріб: ";
    fraction1.displayFraction();
    cout << "\nДругий дріб: ";
    fraction2.displayFraction();
    Fraction sum = Fraction::add(fraction1, fraction2);
    Fraction difference = Fraction::subtract(fraction1, fraction2);
    Fraction product = Fraction::multiply(fraction1, fraction2);
    Fraction quotient = Fraction::divide(fraction1, fraction2);
    cout << "\n\nСума: ";
    sum.displayFraction();
    cout << "\nРізниця: ";
    difference.displayFraction();
    cout << "\nДобуток: ";
    product.displayFraction();
    cout << "\nЧастка: ";
    quotient.displayFraction();
    return 0;
}
