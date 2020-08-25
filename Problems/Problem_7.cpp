
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int getPrime(int upper_limit)
{
    vector<int> list;
    list.push_back(2);

    int i=3,s=0,count=1;
    bool isprime=true;

    while(count<upper_limit)
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
        {
             list.push_back(i);
             count++;
        }
           
        i+=2;    
    }

    return list[list.size()-1];
}

ll solve()
{
    int upper_limit=10001;
    return getPrime(upper_limit);
}

int main(){
    cout<<solve()<<endl;
   
    return 0;
}