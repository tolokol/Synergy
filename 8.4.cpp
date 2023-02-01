#include <iostream>

class Function
{
  public:
    virtual double valueAt(double x) = 0;
    virtual void display() = 0;
};

class Ellipse : public Function
{
  public:
    double valueAt(double x) override
    {
        return 1 / (1 + x * x);
    }

    void display() override
    {
        std::cout << "y = 1 / (1 + x^2)" << std::endl;
    }
};

class Hyperbola : public Function
{
  public:
    double valueAt(double x) override
    {
        return 1 / (1 - x * x);
    }

    void display() override
    {
        std::cout << "y = 1 / (1 - x^2)" << std::endl;
    }
};

class Parabola : public Function
{
  public:
    double valueAt(double x) override
    {
        return x * x;
    }

    void display() override
    {
        std::cout << "y = x^2" << std::endl;
    }
};

void displayFunction(Function &f)
{
    std::cout << "Значение функции at x = 2 is: " << f.valueAt(2) << std::endl;
    f.display();
}

int main()
{
    Ellipse e;
    Hyperbola h;
    Parabola p;

    Function *fp1 = &e;
    Function *fp2 = &h;
    Function *fp3 = &p;

    displayFunction(e);
    displayFunction(h);
    displayFunction(p);

    displayFunction(*fp1);
    displayFunction(*fp2);
    displayFunction(*fp3);

    return 0;
}