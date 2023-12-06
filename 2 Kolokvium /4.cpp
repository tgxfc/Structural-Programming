// Напишете програма со која ќе ја пронајдете поднизата со најголем збир на елементите и испечатете го тој збир. 
// Дополнително, пронајдете го и испечатете го процентот на елементи што се користат во поднизата во споредба со вкупниот број на елементи на низата.


#include<iostream>
using namespace std;

int main()
{
    int n, array[100], counter=0, maxCounter, suma=0,maxSuma=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
        counter++;
        suma += array[i];
        if(suma>maxSuma)
        {
            maxCounter=counter;
            maxSuma=suma;
        }
        if(suma<0)
        {
            suma=0;
            counter=0;
        }
    }
    float procent=(1.0*maxCounter/n)*100;

    cout << maxSuma << ' ' <<procent<< "%";

    return 0;
}
