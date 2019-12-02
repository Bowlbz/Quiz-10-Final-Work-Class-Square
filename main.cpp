//Bowlby, David COSC 1437-58001
//DR_T Quiz 10 Final

#include <iostream>
#include <cmath>

using namespace std;

class Square
{
  private:
    double width;
    double height;
  public:
    Square(double w, double h)//Constructor
    {
      width = w;
      height = h;
    };

    void setWidth(double w) { width = w;}
    double getWidth() const { return width;}

    void setHeight(double h) { height = h;}
    double getHeight() const { return height;}

    double area() { return (width * height);}
};




int main() 
{
  Square s1(5.0, 5.0);
  Square s2(7.4, 7.4);

  cout << "\nThe Area of Square 1: " << s1.area() << endl;
  cout << "\nThe Area of Square 2: " << s2.area() << endl;

  return 0;
}