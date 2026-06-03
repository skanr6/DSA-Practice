#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
for(int i=0;i<n;i++)
{   
    for(int j=0;j<n-i-1;j++)
    {
       cout<<" ";
    }
    char ch='A';
    int bk=(2*i+1)/2;
    for(int k=1;k<=2*i+1;k++)
    {
        cout<<ch;
        if(k<=bk) ch++;
        else ch--;
    }
    
    cout<<endl;
}}
int main()
{
    int N;
    cout<<" Enter the value of N : ";
    cin>>N;
    pattern(N);
}