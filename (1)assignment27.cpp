#include<iostream>
using namespace std;
class Complex
{
private:
    int a=20,b=10;
public:
    Complex add(Complex c){
    Complex c4(0,0);
    c4.a=a+c.a;
    c4.b=b+c.b;
    return c4;
    }
    Complex subtract(Complex c){
    Complex c4(0,0);
    c4.a=a-c.a;
    c4.b=b-c.b;
    return c4;
    }
    Complex division(Complex c){
    Complex c4(0,0);
    c4.a=a/c.a;
    c4.b=b/c.b;
    return c4;
    }
    Complex multiplication(Complex c){
    Complex c4(0,0);
    c4.a=a*c.a;
    c4.b=b*c.b;
    return c4;
    }
    Complex equals(Complex c){
    Complex c4(0,0);
    c4.a=a==c.a ? a : c.a;
    c4.b=b==c.b ? b : c.b;
    return c4;
    }

    void show(){
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
    Complex(int x,int y){
    a=x;
    b=y;
    }
};
int main(){
Complex c1(10,30),c2(30,30),c3(0,0);
c3=c1.add(c2);
c3.show();
c3=c1.subtract(c2);
c3.show();
c3=c1.division(c2);
c3.show();
c3=c1.multiplication(c2);
c3.show();
c3=c1.equals(c2);
c3.show();
}
