#include <iostream>
#include <string>
#include <Windows.h>

class Figure
{
protected:
	int sizeNum;
	std::string name;
public:
	Figure() 
	{
		sizeNum = 0;
		name = "Фигура";
	}
	int get_sizeNum() {
		return sizeNum;
	}
	std::string get_name() {
		return name;
	}
};

class Triangle : public Figure
{
public:
	Triangle()
	{
		sizeNum = 3;
		name = "Треугольник";
	}
};

class Quadrilateral : public Figure
{
public:
	Quadrilateral()
	{
		sizeNum = 4;
		name = "Четырехугольник";
	}
};
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figure figure;
	Triangle triangle;
	Quadrilateral quadrilateral;
	std::cout << "Количество сторон:\n";
	std::cout << figure.get_name() << ": " << figure.get_sizeNum() << std::endl;
	std::cout << triangle.get_name() << ": " << triangle.get_sizeNum() << std::endl;
	std::cout << quadrilateral.get_name() << ": " << quadrilateral.get_sizeNum() << std::endl;
	return 0;
}