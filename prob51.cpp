#include<iostream>
using namespace std;

class Shape{
    public: 
    virtual double calcArea()const=0;
    virtual double calcPerimeter()const=0;

};
class Circle : public Shape{
    private:
    double radius;
    public:
        Circle(double r ) :radius(r){}
        double calcArea(){
            return 3.14*radius*radius;
        }
        double calcPerimeter(){
            return 2*3.14*radius;
        }
};

class Rectangle : public Shape{
    private:
    double lenght;
    double width;
    public:
    Rectangle(double l, double w) :lenght(l),width(w){}
    double calcArea(){
        return lenght*width;
    }
    double calcPerimeter(){
        return 2*(lenght+width); 
    }
};

void main(){
    Circle circle(5);
    Rectangle rectangle(4,6);
    cout<< circle.calcArea();
    cout<<circle.calcPerimeter();
    cout<<rectangle.calcArea();
    cout<<rectangle.calcPerimeter();
}