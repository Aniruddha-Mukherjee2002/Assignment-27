#include<iostream>
using namespace std;
class Overload
{   private:
  static int a;
public:
    Overload(int x){ a=x;}
    void operator++(){
    a=a+1;
    }
    void show(){
    cout<<a;
    }


};
int Overload::a;
int main(){
Overload o1(0),o2(0);
++o1;
++o2;
o1.show();

}
