//UNARY OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class Increase{
    private:
        int value;
    public : 
    Increase(){
        value=10;
    }

    void operator ++(){
        value = value +5;
    }

    void display(){
        cout<<"value is "<<value<<endl;
    }

};


void main(){
    Increase Inc;   
    ++Inc;
    Inc.display();
}