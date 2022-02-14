#include <iostream>
#include "Square.cpp"
using namespace std;
int main()
{
    Square s1(6), s2(2);
    s1.Print();
    cout <<"Perimeter = "<< s1.Perimeter() << endl;
    cout <<"Area = " << s1.Area() << endl;
    (s1+s2).Print();
    cout <<"Perimeter = " << (s1+s2).Perimeter() << endl;
    cout <<"Area = " << (s1+s2).Area() << endl;
    (s1-s2).Print();
    cout << "Perimeter = " << (s1-s2).Perimeter() << endl;
    cout <<"Area = "<< (s1-s2).Area() << endl;
}