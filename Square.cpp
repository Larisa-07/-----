#include <iostream>
#include "Square.h"
using namespace std;

Square::Square(double x) : a(x){}
Square::~Square()
{
//    cout << "Destructor\n";
}
double Square::Area()
{
    return this -> a * this -> a;
}

double Square::Perimeter()
{
    return 4 * this -> a;
}
void print(double a)
{
    cout << "| ";
    for(double i = 0; i < a * 1.5 ; ++i)
        cout << " ";
    cout << "| "<< endl;
}
void Square::Print()
{
    double a = this -> a;
    for(double i = 0; i < a; i++)
    {
        cout <<"- ";
    }
    cout << endl;
    for(double i = 0; i < a; i++)
    {
        print(a);
    }
    for(double i = 0; i < a; i++)
    {
        cout <<"- ";
    }
    cout << endl;
}
Square Square::operator+(Square &s)
{
    return s.a + this -> a;
}

Square Square::operator-(Square &s)
{
    if(s.a > this -> a)
    return s.a - this -> a;
    return this -> a - s.a;
}