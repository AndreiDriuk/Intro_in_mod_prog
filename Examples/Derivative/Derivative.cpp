// Derivative.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
double getDerivative(double x1, double x2, double dt);
double gauss(double x, double a = 1, double b = 0, double c = 1);
double pol2(double x, double a = 1, double b = 2, double c = 0);

int main()
{
    double x1;
    double step;
    cout << "Enter x1: " << endl;
    cin >> x1;
    cout << "Enter step " << endl;
    cin >> step;
    cout << "Gauss derivative in " << x1 << ": " << getDerivative(gauss(x1), gauss(x1 + step), step) << endl;
    cout << "Pol derivative in " << x1 << ": " << getDerivative(pol2(x1), pol2(x1 + step), step) << endl;
}

double getDerivative(double x1, double x2, double dt) {
    return (x2 - x1) / dt;
}
double gauss(double x, double a, double b, double c) {
    return a*exp(-(x-b)*(x-b) / (2.0*c));
}

double pol2(double x, double a, double b, double c) {
    return a * x * x + b * x + c;
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
