#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    public:
    void setdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
    void display()
    {
        cout<<"Number is ";
        cout<<x<<y<<z;
    }


};
int main()
{
    Numbers a,b;
    cout<<"Enter the numbers ";
    a.setdata(5,6,7);
    cout<<endl;
    a.display();
    b=-a;
    b.display();

   
}