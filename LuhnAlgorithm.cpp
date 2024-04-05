#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    const int N = 16;
    int card[N];
    int sum = 0;
    int evenSum = 0, oddSum = 0;
    string input = "";
    cout << "Введите номер карты:  ";
    cin >> input;

    for (int i = 0; i < input.size(); i++)
        card[i] = input[i] - '0';

    for (int i = N - 1; i >= 0; i--)
    {
        int p;
        int num = card[i];
        if (i % 2 == 0)
        {
            p = num * 2;
            if (p > 9) p = p - 9;
            evenSum += p;
        }
        else
        {
            p = num;
            oddSum += p;
        }
    }

    sum = evenSum + oddSum;
    cout << "Сумма цифр на чётных местах: " << evenSum << endl;
    cout << "Сумма цифр на нечётных местах: " << oddSum << endl;
    cout << "Общая сумма: " << sum << endl;

    if (sum % 10 == 0) {
        cout << "Карта действительна" << endl;
    }
    else {
        cout << "Карта недействительна" << endl;
    }
    return 0;
}
