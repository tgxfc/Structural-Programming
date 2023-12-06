// Од стандарден влез се вчитува п (колку број треба да има во низата), а потоа се внесува секој од елементите на низата. 
// На излез корисникот треба да отпечати секој елемент кој после него има два два елементи.

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
        if(array[i+1]>0 && array[i+2]>0)
            cout<<array[i]<<" ";
    }

    return 0;
}
