#include <iostream>
#include <string>

using namespace std;

 struct Figure
 {
 private:
	 int sides_figure = 0;

 public:
	 virtual string display_name()
	 {
		 return "Фигура";
	 }
	 virtual int display_sides_figure()
	 {
		 return sides_figure;
	 }

 };

 struct Triangle: public Figure
 {
 private:
	 int sides_figure = 3;

 public:
	 string display_name() override
	 {
		 return "Треугольник";
	 }
	 int display_sides_figure() override
	 {
		 return sides_figure;
	 }
 
 }; 
 
 struct Quadrangle: public Figure
 {
 private:
	 int sides_figure = 4;

 public:
	 string display_name() override
	 {
		 return "Четырёхугольник";
	 }
	 int display_sides_figure() override
	 {
		 return sides_figure;
	 }
 
 };

 void print_figures(Figure* figure)
 {
	 cout << figure->display_name() << ": " << figure->display_sides_figure() << endl;
 }


int main()
{
	setlocale(LC_ALL, "Rus");

	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;

	print_figures(&figure);
	print_figures(&triangle);
	print_figures(&quadrangle);

}