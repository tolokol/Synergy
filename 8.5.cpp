#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
//TASK 1

class Figure {
public:
	virtual void area() = 0;
	~Figure(){}
};
class Parallelogram : public Figure {
protected:
	int side;
	int height;
public:
	Parallelogram(int side, int height) : side(side), height(height) {}
	void area() override {
		cout << "Parallelogram is " << side * height << endl;
	}
	virtual ~Parallelogram(){}
};
class Circle : public Figure {
	const double Pi = 3.14;
	double radius;
public:
	Circle(double radius) : radius(radius) {}
	void area() override {
		cout << "Circle is " << Pi * (radius * radius) << endl;
	}
	virtual ~Circle(){}
};
class Rectangle : public Parallelogram {
public:
	Rectangle(int side, int height) : Parallelogram(side, height) {}
	void area() override {
		cout << "Rectangle is " << side * height << endl;
	}
	virtual ~Rectangle(){}
};
class Square : public Parallelogram {
public:
	Square(int side, int height) : Parallelogram(side, height) {}
	void area() override {
		cout << "Square is " << side * height << endl;
	}
	virtual ~Square(){}
};
class Rhombus : public Parallelogram {
public:
	Rhombus(int side, int height) : Parallelogram(side, height) {}
	void area() override {
		cout << "Rhombus is " << 0.5 * (side * height) << endl;
	}
	virtual ~Rhombus(){}
};

//TASK 2
class Car {
private:
	std::string company;
	std::string model;
public:
	Car(std::string company, std::string model) {
		this->company = company;
		this->model = model;
		cout << "This car is " << company << " " << model << " ckonstr" << endl;
	}
	~Car() {}
};
class PassengerCar : public Car {
public:
	PassengerCar(std::string company, std::string model) : Car(company, model) {
		cout << "This car is " << company << " " << model << " pckonstr" << endl;
	}
	~PassengerCar() {}
};
class Bus : public Car {
public:
	Bus(std::string company, std::string model) : Car(company, model) {
		cout << "This car is " << company << " " << model << " bkonstr" << endl;
	}
	~Bus() {}
};
class Minivan : public PassengerCar, public Bus {
public:
	Minivan(std::string company, std::string model) : PassengerCar(company, model), Bus(company, model) {
		cout << "This car is " << company << " " << model << " mkonstr" << endl;
	}
	~Minivan() {}
};
//TASK 3
class Fraction {
private:
	int numerator;
	int denominator;
public:
	Fraction(int numerator, int denominator) {
		if (denominator == 0)
			cout << "Error, denominator is 0!!\n";
		this->denominator = denominator;
		this->numerator = numerator;
	}
	int getNumerator() const { return numerator; }
	int getDenominator() const { return denominator; }
	friend Fraction operator+ (const Fraction& fl, const Fraction& fr);
	friend Fraction operator- (const Fraction& fl, const Fraction& fr);
	friend Fraction operator* (const Fraction& fl, const Fraction& fr);
	friend Fraction operator/ (const Fraction& fl, const Fraction& fr);
	friend Fraction operator - (const Fraction& m);
	friend bool operator ==(const Fraction& fl, const Fraction& fr);
	friend bool operator !=(const Fraction& fl, const Fraction& fr);
	friend bool operator >(const Fraction& fl, const Fraction& fr);
	friend bool operator <(const Fraction& fl, const Fraction& fr);

	~Fraction() {}
};
Fraction operator+ (const Fraction& fl, const Fraction& fr) {
		return Fraction(fl.numerator * fr.denominator + fr.numerator * fl.denominator, fl.denominator * fr.denominator);
}
Fraction operator- (const Fraction& fl, const Fraction& fr) {
	return Fraction(fl.numerator * fr.denominator - fr.numerator * fl.denominator, fl.denominator * fr.denominator);
}
Fraction operator* (const Fraction& fl, const Fraction& fr) {
	return Fraction((fl.numerator * fr.denominator) * (fr.numerator * fl.denominator), fl.denominator * fr.denominator);
}
Fraction operator/ (const Fraction& fl, const Fraction& fr) {
	return Fraction((fl.numerator * fr.denominator) / (fr.numerator * fl.denominator), fl.denominator * fr.denominator);
}
Fraction operator - (const Fraction& m) {
	return Fraction(m.numerator * -1, m.denominator * -1);
}
bool operator ==(const Fraction& fl, const Fraction& fr) {
	return (fl.numerator == fr.numerator && fl.denominator == fr.denominator);
}
bool operator !=(const Fraction& fl, const Fraction& fr) {
	return !(fl == fr);
}
bool operator >(const Fraction& fl, const Fraction& fr) {
	return (fl.numerator * fr.denominator > fr.numerator * fl.denominator);
}
bool operator <(const Fraction& fl, const Fraction& fr) {
	return (fl.numerator * fr.denominator < fr.numerator * fl.denominator);
};


int main() {
	//TASK 1
	Rhombus r1(2,3);
	r1.area();
	Square s1(3,3);
	s1.area();
	Rectangle rec1(2,5);
	rec1.area();
	Circle c1(4);
	c1.area();
	Parallelogram p1(2,4);
	p1.area();

	cout << endl;

	//TASK 2
	Car car("car", "undefined");
	PassengerCar pc1("BMW", "z8"); // Последовательность конструкторов Car > PassengerCar
	Bus b1("MAZ", "RU221QW"); // Последовательность конструкторов Car > Bus 
	Minivan m1("MiniCooper", "coupe"); // Последовательность конструкторов Car > PassengerCar > Car > Bus > Minivan

	cout << endl;

	//TASK 3
	Fraction f1(2, 7);
	Fraction f2(1, 5);
	Fraction sum = f1 + f2;
	Fraction subtract = f1 - f2;
	Fraction product = f1 * f2;
	Fraction quotient = f1 / f2;
	Fraction unitaryMinus = -f1;
	cout << sum.getNumerator() << "/" << sum.getDenominator() << endl;
	cout << subtract.getNumerator() << "/" << subtract.getDenominator() << endl;
	cout << product.getNumerator() << "/" << product.getDenominator() << endl;
	cout << quotient.getNumerator() << "/" << quotient.getDenominator() << endl;
	cout << unitaryMinus.getNumerator() << "/" << unitaryMinus.getDenominator() << endl;
	if (f1 == f2)
		cout << "Same!\n";
	if (f1 != f2)
		cout << "NOT Same!\n";
	if (f1 > f2)
		cout << "Number " << f1.getNumerator() << "/" << f1.getDenominator() << " is greater than " << f2.getNumerator() << "/" << f2.getDenominator() << "!\n";
	if (f1 < f2)
		cout << "Number " << f2.getNumerator() << "/" << f2.getDenominator() << " is greater than " << f1.getNumerator() << "/" << f1.getDenominator() << "!\n";
	cout << endl;
	

	return 0;
}