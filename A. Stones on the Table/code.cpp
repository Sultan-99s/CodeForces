#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, c=0;
    char s[50];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    char a = s[0];
    for(int i=1; i<n; i++)
    {
        if(a==s[i])
            c++;
        a=s[i];
    }
    cout<<c<<endl;
    return 0;
}
