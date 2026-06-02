#include<bits/stdc++.h>
using namespace std;
//upper
void pattern1( int n )
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
//lower
void pattern2( int n )
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int N;
    cout<<" Enter the value of N : ";
    cin>>N;
    pattern1(N);
    pattern2(N);
    return 0;
}