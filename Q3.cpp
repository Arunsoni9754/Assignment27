#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"the number is"<<a<<"+i"<<b;
    }
    friend complex operator+(complex,complex);
};
complex operator+(complex x,complex y)
{ complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,5);
    c2.setdata(4,5);
    c3=c1+c2;
    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl;
    c3.display();
}