//Од тастатура се вчитува текстуална низа дадена во еден ред. По вчитувањето на низата се вчитува еден знак c.
// На екран да се испечати поднизата која почнува од првото појавување на знакот c до последното појавување на знакот c.
// Да се игнорира големината на буквите.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int pocetok=0, kraj=0;
    char c, str[100];
    cin.getline(str, 100);
    cin>>c;

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==c)
        {
            if(pocetok==0)
            {
                pocetok=i;
            }
            else kraj=i;
        }
    }

    for(int i=pocetok; i<=kraj; i++)
    {
        cout<<str[i];
    }

    return 0;
}
