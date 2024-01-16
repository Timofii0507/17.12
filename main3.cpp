#include "hm.h"

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Fraction fraction1, fraction2;
    cout << "������ ��� ��� ������� �����:\n";
    fraction1.inputFraction();
    cout << "\n������ ��� ��� ������� �����:\n";
    fraction2.inputFraction();
    cout << "\n������ ���: ";
    fraction1.displayFraction();
    cout << "\n������ ���: ";
    fraction2.displayFraction();
    Fraction sum = Fraction::add(fraction1, fraction2);
    Fraction difference = Fraction::subtract(fraction1, fraction2);
    Fraction product = Fraction::multiply(fraction1, fraction2);
    Fraction quotient = Fraction::divide(fraction1, fraction2);
    cout << "\n\n����: ";
    sum.displayFraction();
    cout << "\nг�����: ";
    difference.displayFraction();
    cout << "\n�������: ";
    product.displayFraction();
    cout << "\n������: ";
    quotient.displayFraction();
    return 0;
}
