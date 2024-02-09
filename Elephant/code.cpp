#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, c=0;
    int n=5;
    cin>>a;
    while(a!=0)
    {
        c = c + a/n;
        a=a%n;
        n--;
    }
    cout<<c;
}
