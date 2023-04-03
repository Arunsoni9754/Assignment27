#include<iostream>
using namespace std;
class person
{
    private:
    int age;
    int rank;
    public:
    void setdata(int a,int b)
    {
        age=a;
        rank=b;
    }
    person operator++()//Pre increament
    {
        person temp;
        temp.rank=++rank;
        temp.age=++age;
        return temp;
    }
    person operator++(int)//Post icreament
    {
        person temp;
        temp.rank=rank++;
        temp.age=age++;
        return temp;
    }
     person operator--()//Pre decreament
    {
        person temp;
        temp.rank=--rank;
        temp.age=--age;
        return temp;
    }
    person operator--(int)//Post dereament
    {
        person temp;
        temp.rank=rank--;
        temp.age=age--;
        return temp;
    }
    void display()
    {
        cout<<"The age is "<<age;
        cout<<endl;
        cout<<"The rank is "<<rank;
        cout<<endl;
    }
};
int main()
{
    person p1,p2;
    int a,b,c,d;
    cout<<"Enter the age and rank of person respectively";
    cin>>a>>b;
    p1.setdata(a,b);
    p2.setdata(20,100);
    p1++;//Post increament
    ++p2;//pre increament
    p1.display();
    cout<<endl;
    p2.display();
}