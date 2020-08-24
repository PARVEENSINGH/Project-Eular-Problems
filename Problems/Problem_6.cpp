

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() 
{
    ll n;
    cin>>n;
    
    ll t=(n*(n+1))/2;
    ll square_of_sums =t*t;
  
    ll sum_of_squares=(n*(n+1)*(2*n+1))/6;
  
    cout<<(square_of_sums-sum_of_squares);
	return 0;
}
