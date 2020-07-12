
#include <iostream>
using namespace std;

int main() 
{
    int n=4000000;
    long long  sum=0;
    int i=1,temp=1,b=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        b=temp;
        temp=i;
        i=b+temp;
    }
    cout<<sum;
	return 0;
}
