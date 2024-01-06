// Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
//
// Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број. За секој од нив да се испечати максималната цифра во посебен ред. 

#include <iostream>
#include <cstring>
using namespace std;

int maxcifra(int n)
{
    if(n==0)
    {
        return 0;
    }

    else
    {
        int cifra=n%10;
        int max=maxcifra(n/10);
        if(cifra>max)
        {
            return cifra;
        }
        else
        {
            return max;
        }
    }
}

int main()
{
    int n;

    while(cin>>n)
    {
        cout<<maxcifra(n)<<endl;
    }

    return 0;
}
