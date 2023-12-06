// Да се напише програма која за низа од N броеви ќе проверува дали парот кој се наоѓа еден до друг е прост број.
// 
// НАПОМЕНА: низата е составена од цифри од 0 до 9

#include<iostream>
using namespace std;

bool Prost(int n){
    if(n<2)
        return false;
    for(int i=2; i*i<=n; ++i)
        if(n%i==0)
            return false;
    return true;
}

int main() {
    int n;
    int array[100];
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>array[i];
    }

    for (int i = 0; i < n; i+=2) {
        int Par=0;
        if(i+1<n)
            Par = array[i] * 10 + array[i + 1];
        else
            Par = array[i];

        if (Prost(Par))
            cout << "brojot " << Par << " e prost" << endl;
        else
            cout << "brojot " << Par << " NE e prost" << endl;
    }

    return 0;
}
