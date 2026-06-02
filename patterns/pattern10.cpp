#include<bits/stdc++.h>
using namespace std;
//upper
void pattern1( int n )
{
    for(int i=1;i<=2*n-1;i++)
    {   int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++)
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
    return 0;
}