  #include<iostream>
using namespace std;
class Time
{
private:
    int hr,minu,sec;
    static int x;
public:

   int operator==(Time t){
    int flag=0;
   if(hr==t.hr)
{    flag++;}
    if(minu==t.minu)
    {flag++;}
    if(sec==t.sec)
  {flag++;}

  if(flag==3)
return 0;
else
return 1;

}




    //void show(){cout<<" "<<hr<<" "<<minu<<" "<<sec<<endl;}
    void operator>>(Time t){


        if(Time::x==0)
            cout<<"first time"<<endl<<endl;
         else
            cout<<endl<<"second time"<<endl<<endl;

      cout<<"Enter hours ";
      cin>>t.hr;
      cout<<endl<<"Enter minutes";
      cin>>t.minu;
      cout<<endl<<"Enter seconds";
      cin>>t.sec;
      Time::x=1;
    }

};
int Time::x=0;

int main(){
    int y;
Time t1,t2,t3;
t1>>t1;
t2>>t2;
y=t1==t2;
if(y==0)
    cout<<"times are same";
else
    cout<<"times are not same"<<y;
return 0;
}
