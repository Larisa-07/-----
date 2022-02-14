class Square
{
public:
Square(double);
~Square();
double Area();
double Perimeter();
void Print();
Square operator+(Square &s);
Square operator-(Square &s);
private:
double a;
};