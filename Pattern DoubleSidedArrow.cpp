#include<iostream>
using namespace std;
int main()
{

    int n,i,j,hn,eq_i;
    cin>>n;
    hn=(n+1)/2;
    for(i=1;i<=n;i++)
    {
        if(i>hn)eq_i=n-i+1;
        else eq_i=i;
        for(j=1;j<=hn-eq_i;j++)cout<<"    ";
        for(j=eq_i;j>=1;j--)cout<<j<<" ";
        if(eq_i>1)
        {
            for(j=1;j<=(4*eq_i)-6;j++)cout<<" ";
            for(j=1;j<=eq_i;j++)cout<<j<<" ";
        }
        cout<<endl;
    }
}
