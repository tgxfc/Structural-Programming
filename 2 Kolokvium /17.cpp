// Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи. 
//
// Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата. 
// Доколку нема таков елемент, функцијата враќа вредност 0.
//
// Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].

#include <iostream>
#include <cstring>
using namespace std;

void par(int array[], int n)
{
    int min=999, counter=0;
    for(int i=0; i<n; i++)
    {
        counter=0;
        for(int j=0; j<=n; j++)
        {
            if(array[i]==array[j])
            {
                counter++;
            }
        }
        if (counter % 2 == 0 && array[i] < min) {
            min = array[i];
        }
    }
    if(counter%2==0 && counter!=0)
    {
        cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<min;
    }
    else
    {
        cout<<"Nitu eden element ne se pojavuva paren broj pati!";
    }
}

int main()
{
    int n;
    int array[100];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    par(array, n);

    return 0;
}
