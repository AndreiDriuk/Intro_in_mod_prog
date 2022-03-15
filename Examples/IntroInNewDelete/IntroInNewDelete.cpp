﻿// IntroInNewDelete.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    // создаем вне нашей программы переменную int
    // new возвращает указатель на адрес переменной
    int* px = new int(5);
    cout << "px = " << px << endl;
    cout <<"*px = " << *px << endl;
    delete px;

    // создаем вне нашей программы массив на 10 элементов
    // new возвращает указатель на адрес переменной
    cout << 5 << endl;
    int size = 5;
    int* myArray = new int[size];
    cout << "myArray = " << myArray << endl;
    for (int i = 0; i < size; ++i) {
        cout << "myArray[" << i << "] = " << myArray[i] << endl;
    }
    delete[] myArray;

    //Утечка памяти, открыть диспетчер задач!
    for (int i = 0; i < size*30000000; ++i) {
        char* myArray1 = new char;
        //delete[] myArray1;
    }
   
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
