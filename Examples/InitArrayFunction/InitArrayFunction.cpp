// InitArrayFunction.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;

void fillArray(double array[], const int size);
//void fillArray(double *array, const int size);
void printArray(double array[], const int size);

int main()
{
    const int SIZE = 20;
    srand(time(NULL));
    double myArray[SIZE];
    fillArray(myArray, SIZE);
    printArray(myArray, SIZE);
}

void fillArray(double array[], const int size) {

    for (int i = 0; i < size; ++i) {
        array[i] = 1.0*rand()/RAND_MAX;
    }

}

/*void fillArray(double* array, const int size) {

    for (int i = 0; i < size; ++i) {
        array[i] = 1.0 * rand() / RAND_MAX;
    }

}*/

void printArray(double array[], const int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << endl;
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
