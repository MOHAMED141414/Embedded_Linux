#include <bits/stdc++.h>


class Drawable {
public:
    virtual void draw() const = 0; 
    virtual ~Drawable() = default; 
};


class Shape {
public:
    
    Shape(const std::string& name) : name(name) {}

   
    std::string getName() const { return name; }

    virtual ~Shape() = default; 

private:
    std::string name; 
};


class Circle : public Shape, public Drawable {
public:
    Circle(double radius) : Shape("Circle"), radius(radius) {}

    void draw() const override {
        std::cout << "Drawing " << getName() << " with radius: " << radius << std::endl;
    }

private:
    double radius; 
};

class Rectangle : public Shape, public Drawable {
public:
    Rectangle(double width, double height)
        : Shape("Rectangle"), width(width), height(height) {}

    void draw() const override {
        std::cout << "Drawing " << getName() << " with width: " << width << " and height: " << height << std::endl;
    }

private:
    double width, height; 
};

class Triangle : public Shape, public Drawable {
public:
    Triangle(double base, double height)
        : Shape("Triangle"), base(base), height(height) {}

    void draw() const override {
        std::cout << "Drawing " << getName() << " with base: " << base << " and height: " << height << std::endl;
    }

private:
    double base, height;
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0);

    Drawable* shapes[] = { &circle, &rectangle, &triangle };

    for (Drawable* shape : shapes) {
        shape->draw(); // Polymorphic call
    }

    return 0;
}
