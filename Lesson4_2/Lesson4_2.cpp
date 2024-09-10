
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int day;
    cout << "Введите число: ";
    cin >> day;
    if (day == 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14, 20, 21, 27, 28) {
        cout << "Это выходной день\n";

    }
    else {
        cout << "Это рабочий день";
    }

      
}

