

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll solve(ll upper_limit)
{
   vector<int> temp;
   temp.push_back(2);

   ll res=2;
   int i=3,j=0; 
    bool isprime=true;
   while(i<upper_limit)
   {
       j=0;
       isprime=true;
       while(temp[j]*temp[j]<=i)
       {
           if(i%temp[j]==0)
           {
               isprime=false;
               break;
           }
           j++;
       }

       if(isprime)
       {
           temp.push_back(i);
           res+=i;
       }

       i+=2;
   }

   return res;
}


int main() 
{
    ll n;
    cin>>n;
    
    cout<<solve(n)<<endl;
	return 0;
}
