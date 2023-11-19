//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
//Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
//Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
//Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <iostream>
using namespace std;

int brojnacifri(int n)
{
    int brojac=0;
    while(n>0)
    {
        brojac++;
        n /=10;
    }
    return brojac;
}

int obraten(int n)
{
    int obraten=0;
    while(n>0)
    {
        obraten=obraten*10+n%10;
        n /=10;
    }
    return obraten;
}

int main()
{
    int n;
    cin>>n;
    if(n<=9)
    {
        cout<<"Brojot ne e validen";
        return 0;
    }
    for(int i=n-1; i>0; i--)
    {
        if(obraten(i)%brojnacifri(i)==0)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}