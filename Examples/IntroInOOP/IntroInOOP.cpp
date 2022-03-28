// Class.cpp : Этот файл содержит функцию "main".
// Здесь начинается и заканчивается выполнение программы.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;
class Figure {
public:
	int x;
	int y;

public:
	//constructor
	Figure() {
		x = 0;
		y = 0;
	}
	Figure(int x1, int y1) {
		x = x1;
		y = y1;
	}

	//setters
	void setX(int x1) {
		x = x1;
	}
	void setY(int y) {
		this->y = y;
	}
	//getters
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	virtual void printInfo() {
		cout << "========PrintInfo in Figure===========" << endl;
		cout << "Figure x = " << getX() << " y = " << getY() << endl;
	}
};

class Circle : public Figure {
public:
	double r;

public:
	Circle() {
		cout<< "Standart Constructor" << endl;
		x = 0; // в стандартном констуркторе устанавливаем основные поля равными 0
		y = 0; // в стандартном констуркторе устанавливаем основные поля равными 0
		r = 1; //радиус равен 1
	}
	Circle(int x1, int y1, double r) {
		cout << "Special Constructor" << endl;
		x = x1;// присваиваем нашим данным те значение, которе передаем в параметрах
		y = y1; // присваиваем нашим данным те значение, которе передаем в параметрах
		this->r = r; // можем обратиться через this к данным именно этого объекта
	}

	double getArea() {
		return 2 * M_PI * r * r;
	}

	virtual void printInfo() {
		cout << "========PrintInfo in Circle===========" << endl;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "r = " << r << endl;
		cout << "Area = " << getArea() << endl;
	}
};

#include <iostream>

int main()
{
	Figure* figure = new Figure(10, 11);
	Circle* circle = new Circle(10, 11, 5);
	Figure* circle1 = new Circle(0, 0, 5);
	figure->printInfo(); //метод figure
	circle->printInfo(); //метод у circle
	circle1->printInfo(); //метод у circle

	delete figure;
}