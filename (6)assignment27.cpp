#include<iostream>
#include<string.h>
using namespace std;
class concat
{
private:
    char str1[10];
    char str2[25];
    char str[10];

public:
    void inputname(){
    cout<<endl<<"Enter a name :";
    fflush(stdin);
    fgets(str,10,stdin);
    cout<<"Enter again: ";
    fflush(stdin);
    fgets(str1,10,stdin);
    }
    void inputname2(){
    cout<<"Enter your first name : ";
    fflush(stdin);
    gets(str2);
    cout<<"Enter your last name : ";
    fflush(stdin);
    gets(str1);
    }
    void show(){ cout<<str2;}
    int operator==(concat c)
    {
        concat c1;
        int x=strcmp(c.str,c.str1);
        return x;
    }
    concat operator+(concat c){
    concat c1;
    strcpy(c1.str2,strcat(c.str2,c.str1));
    return c1;
    }
};
int main(){
concat c3,c4;
c3.inputname2();
c4=c3+c3;
c4.show();

c3.inputname();
int x=c3==c3;
if(x==0)
    cout<<"same";
else
    cout<<"not same";
    cout<<endl;
return 0;
}
