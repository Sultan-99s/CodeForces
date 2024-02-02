#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    for(int i=0; i<n; i++){
        int l = ar[i].length();
        if(l > 10)
            cout<<ar[i][0]<<l-2<<ar[i][l-1]<<endl;
        else
            cout<<ar[i]<<endl;
    }
return 0;
}
