#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0;
    cin>>n;
    int ar[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>ar[i][j];
        }
    }
     for(int i=0; i<n; i++){
      //  for(int j=0; j<3; j++){
            if((ar[i][0]==1 && ar[i][1]==1) || (ar[i][0]==1 && ar[i][2]==1) || (ar[i][1]==1 && ar[i][2]==1))
                c++;
      //  }
    }
    cout<<c;
}
