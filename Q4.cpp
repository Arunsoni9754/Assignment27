#include<iostream>
using namespace std;
class Time
{
    
    public:
        int hours,Minutes,seconds;
    friend istream &operator>>(istream &ip,Time &t)

//istream &operator >>(istream &ip,Time &t)
    {
       cout<<"Enter Hours      : ";
       ip>>t.hours;
       cout<<"Enter Minutes    : ";
       ip>>t.Minutes;
       cout<<"Enter Seconds    : ";
       ip>>t.seconds;
       return ip;
    }
        friend ostream &operator<<(ostream &os,Time &t)
//ostream &operator << (ostream &os,Time &t)
{
    os<<"Hours     :  "<<t.hours<<endl;
    os<<"Minutes   :  "<<t.Minutes<<endl;
    os<<"Seconds   :  "<<t.seconds<<endl;
    return os;
}
  bool operator==(Time c)
    {
        if((hours==c.hours&&hours==c.hours)&&(Minutes==c.Minutes)&&(seconds==c.seconds))
        {
            return 1;
        }
        return 0;
    }
};    
int main()
{
    Time t1,t2;
    cout<<"Enter First Time"<<endl;
    cout<<"---------------"<<endl;
    cin>>t1;
    cout<<"First Time"<<endl;
    cout<<t1;
    cout<<"Enter Second Time"<<endl;
    cout<<"---------------"<<endl;
    cin>>t2;
    cout<<"Second Time"<<endl;
    cout<<t2;
    if(t1==t2)
    {
        cout<<"Times are same"<<endl;
    }
    else
    {
        cout<<"Times are not same"<<endl;
    }


}