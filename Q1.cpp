#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }complex operator-(complex c)
    {
        complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }complex operator*(complex c)
    {
        complex temp;
        temp.a=a*c.a;
        temp.b=b*c.b;
        return temp;
    }
    bool operator==(complex c)
    {
        
        if(a==c.a&&b==c.a)
        {
            return 1;
        }
        return 0;
    }
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(6,7);
    c3=c1+c2;
    complex c4=c1-c2;
    complex c5=c1*c2;
    if(c1==c2)
    {
        printf("They are  equal ");
    }
    else
    {
        printf("They are not equal");
    }
        cout<<endl;    

    c3.display();
    cout<<endl;    
    c4.display();    cout<<endl;    

    c5.display();

}