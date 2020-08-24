
#include <iostream>
using namespace std;

using namespace std;
bool checkPalin(int n)
{
    int temp=0;
    int store=n;
    while(n)
    {
        temp=(temp)*10+n%10;
        n/=10;
    }
    return store==temp;
}
int solve()
{
    int temp=0;
    int res=0;
    for(int i=999;i>=100;i--)
    {
        for(int j=999;j>=100;j--)
        {
            temp=i*j;
            if(checkPalin(temp))
              res=max(temp,res);
        }
    }
    return res;
}

int main(){
    cout<<solve()<<endl;
   
    return 0;
}