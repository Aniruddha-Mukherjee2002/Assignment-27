#include<iostream>
using namespace std;
class Matrix
{
private:
    int arr[3][3];

    static int x;
public:
    void inputData()
    {
         cout<<"Enter matrix elements(3 X 3)  : "<<endl;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }

    }
    void showData(){
        if(Matrix::x==0){cout<<"first matrix is : "<<endl;}
        else{cout<<"second matrix is :"<<endl;}

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    Matrix::x=1;
    }
    void showSum(){
        cout<<"addition of two matrix is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    void operator+(Matrix m2)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                arr[i][j]=arr[i][j]+m2.arr[i][j];
            }
        }
    }

};
int Matrix::x=0;
int main()
{
    Matrix m1,m2;
    m1.inputData();
    m1.showData();
    m2.inputData();
    m2.showData();
    m1+m2;
    m1.showSum();

}
