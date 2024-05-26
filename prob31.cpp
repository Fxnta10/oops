#include<iostream>
using namespace std;

class Complex{
    public:   
        int a;
        int b;
    public:
        void getdata(int n1,int n2){
            a=n1;
            b=n2;
        }
        void sum(Complex c1,Complex c2 ){
            a=c1.a+c2.a;
            b=c1.b+c2.b;
        };
        void print(){
            cout<<a<<"+i"<<b;
        }
    
};
void main(){
    Complex c1;
    Complex c2;
    Complex c3;
    c1.getdata(3,4);
    c2.getdata(4,5);
    c3.sum(c1,c2);
    c3.print();
}   