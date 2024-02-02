#include<iostream>
using namespace std;

int main()
{
    int n, x;
    cin>>x;
    n = x+1;
    while(n)
    {
        int a = n%10;
        int b = (n/10)%10;
        int c = (n/100)%10;
        int d = (n/1000)%10;

        if(a != b && b != c && c != d && a != c && b != d && a != d)
            break;
        else
            n++;
    }
    cout<<n;

    return 0;
}
