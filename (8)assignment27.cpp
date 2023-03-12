#include<iostream>
using namespace std;
class Matrix
{
private:
    int arr[3][3];
public:
    void inputData(){
    cout<<"Enter matrix element(3 X 3) : ";
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    }
    void showData(){
    cout<<"matrix elements are :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }

    void operator-()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                arr[i][j]=-arr[i][j];
            }
        }
    }
};
int main(){
Matrix m;
m.inputData();
m.showData();
-m;
m.showData();
return 0;
}
