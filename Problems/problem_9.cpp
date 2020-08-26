

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() 
{
    ll n;
    cin>>n;
    
    int a,b,c;
    bool found=false;
    for(a=1;a<n;a++)
    {
        for(b=a;b<n;b++)
        {
            c=n-a-b;
            if(a*a+b*b==c*c)
            {
                found=true;
                break;
            }
        }
        if(found){
            cout<<a*b*c<<endl;
            break;
        }
    }
	return 0;
}
