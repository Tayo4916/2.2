﻿// 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "ru");
    int n, m, k, z, f, g;
    std::cout << "Введите количество прошедшх секунд с начала суток.\n";
    std::cout << "Введенное количество секунд: ";
    std::cin >> n;
    z = n / 3600; //рассчет часов начала суток
    std::cout << "Количество полных часов: " << floor(z) << std::endl;
    k = z / 60; //рассчет минут с нового часа
    std::cout << "Количество прошедших минут c начала очередного часа: " << floor(k) << std::endl;
    f = 60 * floor(z); //количество полных минут с начала суток
    std::cout << "Количество прошедших минут c начала суток: " << floor(f) << std::endl;
    std::cout << "Количество секунд с очередной минуты: ";
    g = floor(f) / 60;
    std::cout << floor(g);
    _getch();
}
