
#include<iostream>
#include<string.h>
using namespace std;
class rev
{
private:
    char str[100];
public:
    void inputData()
    {
        cout<<"Enter a string in Block letters : ";
        fflush(stdin);
        fgets(str,100,stdin);
    }
    void operator!()
    {
        strlwr(str);
        strrev(str);
    }
    void showData()
    {
        cout<<str;
    }
};
int main()
{
    rev r;
    r.inputData();
    !r;
    r.showData();
    return 0;
}
