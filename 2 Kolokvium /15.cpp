// Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), 
// а секоја од нив не е подолга од 80 знаци.
//
// Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром 
// (се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!". 
// Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.

#include <iostream>
#include <cstring>
using namespace std;

bool Palindrom(char* str)
{
    int start=0, end=strlen(str)-1;
    while(end >= start)
    {
        if(str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool Special(char* str)
{
    while(*str)
    {
        if(!isalnum(*str))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    int n;
    char str[80], max[80], flag=false;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        cin.getline(str, 80);
        if((Palindrom(str) && Special(str)) && (strlen(str)>strlen(max)))
        {
            strcpy(max, str);
            flag=true;
        }

    }

    if(flag)
    {
        cout<<max;
    }
    else
    {
        cout<<"Nema!";
    }

    return 0;
}
