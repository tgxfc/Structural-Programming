// Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).
//
// Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата)
// и бројот на валидни елементи во низата. Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind
// па се до крајот на низата. Ако индексот ind е поголем од N функцијата треба да врати 0.
//
// НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).

// 10
// 2 4 6 8 1 3 9 12 33 44
// 6

#include <iostream>
#include <cstring>
using namespace std;

int sum_pos(int *array, int ind, int n)
{
    if(ind>n)
    {
        return 0;
    }

    else {
        int sum = 0;
        array += ind;
        while(ind<n)
        {
            sum += *array;
            array++;
            ind++;
        }
        return sum;
    }
}

int main()
{
    int n, ind, array[100];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    cin>>ind;


    cout<<sum_pos(array, ind, n);

    return 0;
}
