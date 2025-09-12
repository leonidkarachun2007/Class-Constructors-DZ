#include <iostream>
using namespace std;





// ДЗ "Реализуйте класс Дробь. 
// Необходимо хранить числитель и знаменатель в качестве переменных-членов
// Реализуйте функции-члены для ввода данных в переменные-члены , для выполнения 
// арифметических операций сложения вычитание умножение"


class Fraction 
{
private: 
    int x; 
    int y; 
 
public:   

    Fraction() { 
        cout << "Конструктор по умолчанию\n";
        x = 0;
        y = 0;
    }

    Fraction(int a, int b) { 
        cout << "Конструктор с двумя параметрами\n";
        x = a;
        y = b;

    }

    void Init(int _x, int _y) 
    {
        x = _x;
        y = _y;
    }
    void Sum(Fraction b)
    {
        cout << "X: " << x + b.x << "\tY: " << y + b.y << endl;
    }
    void Min(Fraction b)
    {
        cout << "X: " << x - b.x << "\tY: " << y - b.y << endl;
    }
    void Mul(Fraction b)
    {
        cout << "X: " << x * b.x << "\tY: " << y * b.y << endl;
    }

    void Div(Fraction b)
    {
        cout << "X: " << x / b.x << "\tY: " << y / b.y << endl;
    }


};
int main() 
{
    Fraction a;
    a.Init(10, -20);

    Fraction b(5, 16);


    a.Sum(b);

    a.Min(b);

    a.Mul(b);

    a.Div(b);



}