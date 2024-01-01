// Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
// Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот број на елементи,
// кои ги има таа низа. Функцијата е зададена со следниот прототип:
//
// int BrojPozitivni(int niza[], int n);
//
// Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

#include <iostream>
#include <cstring>
using namespace std;

int BrojPozitivni(int niza[], int n)
{
    if(n<0)
    {
        return 0;
    }

    else
    {
        int counter=0;
        if(niza[n]>0)
        {
            counter++;
        }

        return counter + BrojPozitivni(niza, n-1);
    }
}

int main()
{
    int array[100], n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    cout<<BrojPozitivni(array,n-1);

    return 0;
}
