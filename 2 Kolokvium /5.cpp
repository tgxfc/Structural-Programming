// Од стандарден влез да се вчита број N потоа да се вчитаат ! елементи во една низа.
// 
// Внесете низа да се промени на начин што за секој втор елемент во низата, да му се додаде претходен лев сосед.
// 
// Трансформираната низа да се испечати на стандардниот излез, така што елементите ќе се одвојат со празно место меѓу нив.

#include<iostream>
using namespace std;

int main() {
    int n;
    int array[100];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>array[i];
    }

    for(int i = 0; i < n; i++){
        if(i%2!=0)
            array[i] += array[i-1];
    }

    for(int i = 0; i < n; ++i) {
        cout<<array[i]<<" ";
    }

    return 0;
}
