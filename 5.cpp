#include <iostream>
class Circle
{
private:
    double r = 0;
public:
    Circle(int inr) : r(inr){}
    double S() { return(3.14 * r * r); }
    double C() { return(6.28 * r); }

};

class Triangle
{
private:
    double a, b, c = 0;
    //#define rt(a,b,c) (a*a+b*b==c*c)
public:
    Triangle(double ina, double inb, double inc) : a(ina), b(inb), c(inc) {}
    int PD()
    {
        if ((a == b) and (b == c)) return 3;
        //if (rt(a, b, c) or rt(b, c, a) or rt(c, a, b)) return 2;
        if ((a == b) or (b == c) or (c == a)) return 2;
        return 0;
    }
};

class Point
{
private:
    double x, y = 0;
public:
    Point(double inx,double iny):x(inx),y(iny){}
    void Show()
    { std::cout << "x：" << x << "y：" << y << std::endl; }
    void Change(double inx, double iny)
    {
        x = inx;
        y = iny;
    }
};
class Rectangle:public Point
{
private:
    double a, b = 0;
public:
    Rectangle(Point po,double ina, double inb): Point(po),a(ina),b(inb){}
    double S() 
    {
        return a * b;
    }
    double C()
    {
        return 2 * (a + b);
    }
};

static int count = 0;
class Student
{
private:
    std::string a;
    int b, c;
    double d;
public:
    Student(std::string ina = "", int inb = 0, int inc = 0, double ind = 0) :a(ina), b(inb), c(inc), d(ind)
    {
        count++;
    }
    void Show()
    {
        std::cout << "姓名：" << a << " 班级：" << b << " 学号：" << c << " 分数" << d << std::endl;
    }
    char Score()
    {
        if (d >= 95) return 'A';
        if (d >= 80) return 'B';
        if (d >= 60) return 'C';
        return 'D';
    }
    void sum()
    {
        std::cout << "总数：" << count;

    }
} St[10];

int main()
{
    //5.1
    Circle cir(3);
    std::cout << "圆面积：" << cir.S() << std::endl;
    std::cout << "圆周长：" << cir.C() << std::endl;
    double a, b, c;
    std::cin >> a >> b >> c;
    //5.2
    Triangle tri(a, b, c);
    switch (tri.PD())
    {
    case 0: std::cout << "不等边三角形" << std::endl; break;
    case 2: std::cout << "等腰三角形" << std::endl; break;
    case 3: std::cout << "等边三角形" << std::endl; break;
    default:
        break;
    }
    //5.3
    Point Po(2, 3);
    Rectangle Re(Po, 2, 3);
    std::cout << "矩形面积：" << Re.S() << std::endl;
    std::cout << "矩形周长：" << Re.C() << std::endl;
    //5.4
    for (int i = 0; i < 10; i++)
    {
        St[i].Show();
        std::cout << St[i].Score() << std::endl;
    }
    St[0].sum();
}

