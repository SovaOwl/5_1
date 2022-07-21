#include <iostream>
#include <string>

using namespace std;

 class Figure
 {
 private:
	 int sides_figure = -999;

 protected:
	 Figure(int sides_count)
	 {
		 sides_figure = sides_count;
	 }

 public:
	 virtual string display_name()
	 {
		 return "Фигура";
	 }
	 Figure()
	 {
		 sides_figure = 0;
	 }

	 int display_sides_count()
	 {
		 return sides_figure;
	 }

 };

 class Triangle: public Figure
 {
 public:
	 string display_name() override
	 {
		 return "Треугольник";
	 }

	 Triangle() :Figure(3)
	 {}
 
 }; 
 
 class Quadrangle: public Figure
 {
 public:
	 string display_name() override
	 {
		 return "Четырёхугольник";
	 }
	 Quadrangle():Figure(4)
	 {}
 
 };

 void print_figures(Figure* figure)
 {
	 cout << figure->display_name() << ": " << figure->display_sides_count() << endl;
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
