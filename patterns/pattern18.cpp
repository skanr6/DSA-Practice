#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{   
    for(int i=1;i<=n;i++)
    {   char ch='A'+n-i;
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;


    }
}
int main()
{
    int N;
    cout<<" Enter the value of N : ";
    cin>>N;
    pattern(N);
    return 0;
}