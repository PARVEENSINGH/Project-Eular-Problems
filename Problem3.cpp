
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int div=2;
    long long largestFact=0;
    while(div*div<=n)
    {
        if(n%div==0)
        {
            n/=div;
            largestFact=div;
        }
        else
        div++;
    }
    
    if(n>largestFact)
    largestFact=n;
    
cout<<largestFact<<endl;
	return 0;
}

