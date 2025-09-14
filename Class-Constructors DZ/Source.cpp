#include <iostream>
using namespace std;

class Fraction
{
private:
    int x; 
    int y; 

public:
    
    Fraction() {
        cout << "Конструктор по умолчанию\n";
        x = 0;
        y = 1;
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
        int numerator = x * b.y + b.x * y;
        int denominator = y * b.y;
        cout << (double)numerator / denominator << endl;
    }


    void Min(Fraction b)
    {
        int numerator = x * b.y - b.x * y;
        int denominator = y * b.y;
        cout << (double)numerator / denominator << endl;
    }


    void Mul(Fraction b)
    {
        int numerator = x * b.x;
        int denominator = y * b.y;
        cout << (double)numerator / denominator << endl;
    }


    void Div(Fraction b)
    {
        int numerator = x * b.y;
        int denominator = y * b.x;
        cout << (double)numerator / denominator << endl;
    }
};

int main()
{
    cout << "Создание объекта a:" << endl;
    Fraction a; 
    a.Init(10, 20);

    cout << "Создание объекта b:" << endl;
    Fraction b(5, 16); 

    cout << "\nВыполнение операций:" << endl;
    a.Sum(b);
    a.Min(b);
    a.Mul(b);
    a.Div(b);

    return 0;
}