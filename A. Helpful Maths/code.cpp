#include<iostream>
#include<string.h>
using namespace std;
 
int main()
{
    char s[100];
    int a=0, b=0, c=0;
    cin>>s;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='1')
            a++;
        if(s[i]=='2')
            b++;
        if(s[i]=='3')
            c++;
    }
    for(int i=0; i<a ; i++)
    {
        cout<<"1";
        if(i<a-1 || b>0 || c>0)
            cout<<"+";
    }
    for(int i=0; i<b ; i++)
    {
        cout<<"2";
        if(i<b-1 || c>0)
            cout<<"+";
    }
    for(int i=0; i<c ; i++)
    {
        cout<<"3";
        if(i<c-1)
            cout<<"+";
    }
    return 0;
}
