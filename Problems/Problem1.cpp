

#include <iostream>
using namespace std;

typedef long long ll;

int getsum_of_divisirs(int m,int n)
{
    return m*(n/m)*((n/m)+1)/2;
}

int main() 
{
    int n;
    cin>>n;
 
    int sum=0;
    // for(int i=3;i<n;i++)
    // {
    //     if(i%3==0 || i%5==0)
    //     sum+=i;
    // }
    
    //Good Approach

    sum=getsum_of_divisirs(3,n-1)+getsum_of_divisirs(5,n-1)-getsum_of_divisirs(15,n-1);
    cout<<sum;
	return 0;
}
