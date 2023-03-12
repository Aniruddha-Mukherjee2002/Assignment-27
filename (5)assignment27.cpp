#include<iostream>
using namespace std;
class Negate
{
private:
    int x,y,z;
public:

    Negate operator-()
    {
       Negate n2;
        n2.x=x*-1;
         n2.y=y*-1;
          n2.z=z*-1;
        return n2;
    }
    void setData(int a,int b,int c){
    x=a;
    y=b;
    z=c;
    }
    void showData(){
    cout<<x<<endl<<y<<endl<<z<<endl;
    }
};
int main(){
Negate n3,n4;
n3.setData(1,2,3);
n4=-n3;
n4.showData();

}
