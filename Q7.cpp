#include<iostream>
using namespace std;
class fraction
{
    long num;
    long deno;
    public:
    fraction(long n=0,long d=0)
    {
        num=n;
        deno=d;
    }
    friend void operator>>(istream &ip,fraction &f)
    {
        cout<<"Numerator    :   ";
        ip>>f.num;
        cout<<"Denominator  :   ";
        ip>>f.deno;
    }
    friend void operator<<(ostream &op,fraction &f)
    {
        op<<f.num<<"/"<<f.deno<<endl;
    }
    fraction operator++() //pre increament
    {
        fraction f;
        f.num=++num;
        f.deno=++deno;
        return f;   
    }
    fraction operator++(int)
    {
        fraction f;
        f.num=num++;
        f.deno=deno++;
        return f;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"f1   :   ";
    cout<<f1;
    cout<<"f2   :   ";
    cout<<f2;
    cout<<"Enter 1st Fraction value"<<endl;
    cin>>f1;
    f1++;
    cout<<"f1++ :   ";
    cout<<f1;
    ++f1;
    cout<<"++f1 :   ";
    cout<<f1;
    cout<<"Enter second value"<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"f2 = f1++"<<endl;
    cout<<"f1   :   ";
    cout<<f1; 
    cout<<"f2   :   ";
    cout<<f2;
    f2=f1++;
    cout<<"f2 = ++f1"<<endl;
    cout<<"f1   :   ";
    cout<<f1; 
    cout<<"f2   :   ";
    cout<<f2;




}