// Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број. 
// За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број  и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри). 
// За секој внесен број резултатот треба да се испечати во следниот формат:

// [број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]

#include <iostream>
using namespace std;
 
int main() {
    int broj;
    int prethodna_max_cifra = 0;
  
    while(cin>>broj) {
        int sum=0;
        int max_cifra=0;
        int temp_broj = broj;
      
        while(temp_broj > 0) {
            int cifra = temp_broj % 10;
            sum = sum + cifra;
            temp_broj = temp_broj / 10;
            if(cifra > max_cifra) {
                max_cifra = cifra;
            }
        }
      
        int zbir = sum + prethodna_max_cifra;
        prethodna_max_cifra = max_cifra;
        cout<<broj<<": "<<zbir<<endl;
    }
  
    return 0;
}
