#include <iostream>

using namespace std;
void numar (int n,int c, int &m)
{
    int p=1,k;
    m=0;
    while(n!=0)
    {
        if(n%10!=c)
        {
            m=(n%10)*p+m;
            p=p*10;
        }
        n=n/10;
    }
    if(m==0 && k!=0)
        m=0;
    else
        m=-1;
}
int main()
{
    int m;
    numar(5555,5,m);
    cout<<m;
    return 0;
}
