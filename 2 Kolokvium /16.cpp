// Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.
//
// Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c  најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) 
// според редоследот како што се прочитани од влезот. При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

#include <iostream>
#include <cstring>
using namespace std;

int Proverka(char* str)
{
    int counter=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(toupper(str[i])=='A' && str[i+1]=='1' && tolower(str[i+2])=='c')
            counter++;
    }

    return counter;
}

void Transform(char* str)
{
    for(int i=0; i<strlen(str); i++)
    {
        if(isalpha(str[i]))
        {
            if(isupper(str[i]))
                str[i]=tolower(str[i]);
        }
    }

    cout<<str<<endl;
}

int main()
{
    int n;
    char str[100];
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        cin.getline(str, 100);
        int proverka=Proverka(str);

        if(proverka>=2)
            Transform(str);
    }
    
    return 0;
}
