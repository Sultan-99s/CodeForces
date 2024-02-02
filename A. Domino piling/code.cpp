#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, c=0;
    cin>>m>>n;
    if(m>n){
        c= ((m/2)*n)+(m%2)*(n/2);
    }
    else
        c= ((n/2)*m)+(n%2)*(m/2);
 
    cout<<c;
}
