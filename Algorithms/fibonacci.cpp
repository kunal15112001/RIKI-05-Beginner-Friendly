#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fib(int n)
{
    int t1;
    t1=0;
    int t2;
    t2=1;
    int Term;
    for(int i=1; i<=n; i++)
    {
        cout<<"0"<<endl;
        cout<<"1"<<endl;
        Term= t1+t2;
        t1=t2;
        t2=Term;
        cout<<Term<<endl;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    
    fib(n);
}
