#include<iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;
    char symbol;
public:

    Point() {
        cout << "Constructor by default\n";
        x = 0;
        y = 0;
        symbol = 'A';
    }

    Point(char z, int a, int b) {
        cout << "Constructor by 3 params\n";
        symbol = z;
        x = a;
        y = b;

    }

    void Print()
    {
        cout << symbol << "-> X: " << x << "\tY: " << y << endl;
    }
    void Init(char t, int _x, int _y)
    {
        symbol = t;
        x = _x;
        y = _y;
    }

    void SetSymbol(char sym)// setter
    {
        symbol = sym;
    }
    char GetSymbol()  // getter
    {
        return symbol;
    }

    void SetX(int a)
    {
        if (a >= 0)
        {
            x = a;
        }
    }
    int GetX()
    {
        return x;
    }

    void SetY(int a)
    {
        if (a >= 0)
        {
            y = a;
        }
    }
    int GetY()
    {
        return y;
    }
};
int main()
{
    Point a;

    a.Init('A', 10, -20);
    a.Print();
    a.SetSymbol('T');
    a.Print();

    Point b('B', 10, 20);
    b.Print();
    b.SetSymbol('T');
    b.Print();


    char c = a.GetSymbol();
    cout << c << endl;

    char c = b.GetSymbol();
    cout << c << endl;


}

