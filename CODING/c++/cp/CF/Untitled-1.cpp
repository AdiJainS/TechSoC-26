#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    virtual void draw() const { cout << "Generic shape\n"; }
    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const override { cout << "Drawing a circle\n"; }
};

class Square : public Shape {
public:
    void draw() const override { cout << "Drawing a square\n"; }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Square());
    for (auto s : shapes) s->draw();
    for (auto s : shapes) delete s;
    return 0;
}