
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

vector<int> getPrimesList(int upper_limit)
{
    vector<int> list;
    list.push_back(2);

    int i=3,s=0;
    bool isprime=true;

    while(i<=upper_limit)
    {
        s=0;
        isprime=true;
        //Approach used if a number is not divisible by any of the prime number
        //less than it. Then the number is itself is prime.
        while(list[s]*list[s]<=i)
        {
            if(i%list[s]==0)
            {
                isprime=false;
                break;
            }
            s++;
        }

        if(isprime)
            list.push_back(i);
        i+=2;    
    }

    return list;
}

ll solve()
{
    int temp=1,upper_limit=20;
    ll res=1;
    vector<int> primes_in_range=getPrimesList(upper_limit);

    for(int i=0;i<primes_in_range.size();i++)
    {
        cout<<primes_in_range[i]<<" ";
        temp=(int)floor((int)(log(upper_limit)/log(primes_in_range[i])));
        res=res*pow(primes_in_range[i], temp);
    }

    return res;
}

int main(){
    cout<<solve()<<endl;
   
    return 0;
}