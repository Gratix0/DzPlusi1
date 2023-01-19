
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    //Создадим переменные
    string name;
    string group;
    short int age;
    //Ввод и запись наших значений
    cout << "Здравствуйте! Введите следующие данные:\nИмя:\n";
    cin >> name;
    cout << "Введите вашу группу:\n";
    cin >> group;
    cout << "Введите ваш возраст:\n";
    cin >> age;
    //Вывод значений
    cout << "Проверьте данные.\nИмя:" << name + "\n";
    cout << "Группа: " << group + "\n";
    cout << "Возраст: " << age;
}
