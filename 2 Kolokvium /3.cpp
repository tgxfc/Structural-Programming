// Од стандарден влез да се вчита број N и потоа да се вчитаат М елементи во една низа.
// 
// Внесената низа да се трансформира на начин што елементите кои се наоѓаат на парни позиции ќе се помножат по 2, 
// а елементите кои се наоѓаат на непарни позиции ќе се зголемат за 2.
// 
// Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив.

#include<iostream>
using namespace std;

int main() {
    int n;
    int array[100];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>array[i];

    }

    for(int i = 0; i < n; ++i){
        if(i%2!=0)
            array[i]*=2;
        else if(i%2==0)
            array[i]+=2;
    }

    for(int i = 0; i < n; ++i) {
        cout<<array[i]<<" ";
    }

    return 0;
}
