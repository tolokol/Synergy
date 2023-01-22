#include <iostream>
#include <string>

class Person {
  private:
    std::string name;
    int age;
    char gender;
    double weight;

  public:
    void setName(std::string name) {
      this->name = name;
    }
    std::string getName() {
      return name;
    }
    void setAge(int age) {
      this->age = age;
    }
    int getAge() {
      return age;
    }
    void setGender(char gender) {
      this->gender = gender;
    }
    char getGender() {
      return gender;
    }
    void setWeight(double weight) {
      this->weight = weight;
    }
    double getWeight() {
      return weight;
    }
};

class Student : public Person {
  private:
    int year;

  public:
    void setYear(int year) {
      this->year = year;
    }
    int getYear() {
      return year;
    }
};
int main() {
    Person p;
    p.setName("ИВанов Иван");
    p.setAge(30);
    p.setGender('M');
    p.setWeight(75.5);
    std::cout << "Имя: " << p.getName() << std::endl;
    std::cout << "Возраст: " << p.getAge() << std::endl;
    std::cout << "Пол: " << p.getGender() << std::endl;
    std::cout << "Вес: " << p.getWeight() << std::endl;
    std::cout << std::endl;

    Student s;
    s.setName("Жанна Иванова");
    s.setAge(20);
    s.setGender('F');
    s.setWeight(60.0);
    s.setYear(2002);
    std::cout << "Имя: " << s.getName() << std::endl;
    std::cout << "Возраст: " << s.getAge() << std::endl;
    std::cout << "Пол: " << s.getGender() << std::endl;
    std::cout << "Вес: " << s.getWeight() << std::endl;
    std::cout << "Год учебы: " << s.getYear() << std::endl;

    return 0;
}