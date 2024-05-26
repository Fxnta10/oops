#include<iostream>
using namespace std;

void area(float r){ //for circle 
    int area;
    area= 3.14*r*r;
    cout<<"area of cricle is "<<area;
}

void area(int l,int b ){
    int area;
    area=l*b;
    cout<<"area of rectangle is "<<area;
}

void main(){
    cout<<"enter radius";
    int r;
    cin>>r;
    area(r);
    cout<<"enter lenght and breadth";
    int l,b;
    cin>>l>>b;
    area(l,b);
}