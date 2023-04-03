#include<iostream>
#include<string.h>
using namespace std;
class CString
{
    public:
    char s[20];
    void setdata()
    {
        cout<<"ENter string:";
        cin>>s;
    }
    void display()
    {
        cout<<s<<endl;
    }
    CString operator +(CString x) //concatenate strings
    {
        CString k;
        strcpy(k.s,s);
        strcat(k.s,x.s);
        return k;
    }
    bool operator ==(CString &p)
    {
        for(int i=0;s[i]!='\0';i++)
        {
            for(int j=0;s[j]!='\0';j++)
            {
                if(s[i]==p.s[j])
                {
                    return 1;
                }
                else 
                {
                    return 0;
                }
            }
        }
    }

};
int main()
{
    CString a,b;
    int i;
    a.setdata();
    b.setdata();
    CString w;
    w=a+b;
    w.display();
    if(a==b)
    {
        printf("They are  equal ");
    }
    else
    {
        printf("They are not equal");
    }
        cout<<endl; 


}
 
