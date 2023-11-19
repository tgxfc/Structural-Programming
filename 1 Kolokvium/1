// Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
// Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
// да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

#include <iostream>
using namespace std;

int main(){
    int m, n, flag=0, min=99999;
    cin>>m>>n;
    for(int i=m; i<=n; i++) {
        int temp = i;
        flag = 0;
        while(temp) {
            int cifra = temp % 10;
            if (cifra % 2 != 0) {
                flag = 1;
                break;
            }
            temp = temp / 10;
        }
        if (flag == 0) {
            if (i < min) {
                min = i;
            }
        }
    }
    if (min== 99999) {
        cout<<"NE";
    }
    else cout<<min;

    return 0;
}
