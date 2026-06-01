#include <bits/stdc++.h>
using namespace std; 
int main()
{  
    int marks;
    cout<<" Enter the marks : ";
    cin>>marks;
    if(marks>=90)
    {
        cout<<" A ";
    
    }
    else if(marks>=70 && marks<90)
    {
        cout<<" B ";
    }
    else if(marks>=50 && marks<70)
    {
        cout<<" C ";
    }
    else if(marks>=35 && marks<50)
    {
        cout<<" D ";
    }
    else {
        cout<<" Fail ";
    }
} 