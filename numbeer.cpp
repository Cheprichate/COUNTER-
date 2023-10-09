#include <iostream>
int num;
int counter;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите число\n";
    std::cin >> num;
    if (num == 0) {
        counter++;
    }
    while (num > 0) {
        counter++;
        num /= 10;
    }
    std::cout << "Цифр  числе " << counter;
}
