//whileloop problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,i=0,sum=0;
    cout<<" Enter a number from the range (0,9) : ";
    cin>>d;
    while(i<50)
    {   
        sum=sum+d;
        d=d+10;
        i++;
    }
    cout<<" Summation : "<<sum;
}