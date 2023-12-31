// На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
// што означува колку броеви следуваат по него во истиот ред. Да се напише програма која на СИ за секој ред ќе
// го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита бројот 0.

#include <iostream>
#include <cstring>
using namespace std;

int NajznacanjaCifra(int n)
{
    while(n>=10)
    {
        n /= 10;
    }
    return n;
}

int main()
{
    int n, array[100];
    while(cin>>n && n!=0)
    {
        int max=0, maxpos=0;

        for(int i=0; i<n; i++)
        {
            cin>>array[i];
        }

        for(int i=0; i<n; i++)
        {
            if(NajznacanjaCifra(array[i])>max)
            {
                max = NajznacanjaCifra(array[i]);
                maxpos = i;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(i==maxpos)
            {
                cout<<array[i]<<" ";
            }
        }
    }

    return 0;
}
