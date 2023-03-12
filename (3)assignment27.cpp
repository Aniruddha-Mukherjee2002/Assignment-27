#include<iostream>
using namespace std;
class Overload
{
private:
    int a,b;
public:
    Overload(int x,int y){a=x;b=y;}
    void friend f1(Overload,Overload);
};
void f1(Overload o,Overload o3){
cout<<o.a<<"+"<<o.b<<"i"<<" + "<<o3.a<<"+"<<o3.b<<"i"<<endl<<o.a+o3.a<<"+"<<o.b+o3.b<<"i"<<endl;
}
int main(){
Overload o1(10,20),o2(50,20);
f1(o1,o2);
}
