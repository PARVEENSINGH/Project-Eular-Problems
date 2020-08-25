
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int div=2;
    long long largestFact=0;

    //Loop to generate all the factors of a given number; Like we does in LCM 
    while(div*div<=n)
    {
        if(n%div==0)
        {
            n/=div;
            largestFact=div;
            //cout<<largestFact<<" ";
        }
        else
        div++;
    }
    
    // This is the condition to check whether the resulting n is a factor or not.
    if(n>largestFact)
    largestFact=n;
    
cout<<largestFact<<endl;
	return 0;
}

