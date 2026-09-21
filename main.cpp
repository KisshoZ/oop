#include <iostream>
#include <string>

class Student {
private:
    std::string name;
public:
    Student(std::string n) : name(n) {}
    void print() const {
        std::cout << "Hello, OOP! Student: " << name << std::endl;
    }
};

int main() {
    Student s("Alice");
    s.print();
    return 0;
}