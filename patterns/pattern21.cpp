#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==0 ||i==n-1)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int j=0;j<1;j++)
            cout<<"*";

            for(int j=0;j<n-2;j++)
            {
                cout<<" ";
            }

            for(int j=0;j<1;j++)
            cout<<"*";
        }
        cout<<endl;
    }}
    int main()
    {
        int N;
        cout<<" Enter the value of N : ";
        cin>>N;
        pattern(N);
        return 0;
    }