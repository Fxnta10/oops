#include<iostream>


using namespace std;
class Complex{
    private:
    int real;
    int imag;

    public:
    void input(){
        cout<<"enter real and imaginary part respectively ";
        cin>>real>>imag;

    }

    Complex operator + (Complex obj){
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag +obj.imag;
        return temp;


    }

    void output(){
        cout<<real<<"+i"<<imag;
    }
};
int main(){
    Complex com1,com2,res;
    cout<<"enter first number"<<endl;
    com1.input();
    cout<<"enter 2nd nummber"<<endl;
    com2.input();
    res=com1+com2;
    res.output();
}