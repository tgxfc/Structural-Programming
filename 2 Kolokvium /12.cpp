// Се внесуваат низи од значи од стандарден влез. Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците. 
// Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. 
// Потоа во нов ред се печати бројот на појавувања на паровите самогласки. Читањето завршува кога ќе се прочита знакот #.

#include <iostream>
#include <cstring>
using namespace std;

bool samoglaska(char str)
{
    if(tolower(str) == 'a' || tolower(str) == 'e' || tolower(str) == 'i' ||tolower(str) == 'o' || tolower(str) == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int counter=0;
    char str[100];

    while(cin.getline(str, 100))
    {
        if (str[0] == '#')
        {
            break;
        }

        for (int i = 0; i < strlen(str); i++) {
            if (samoglaska(str[i]) && samoglaska(str[i + 1])) {
                char n=tolower(str[i]), m=tolower(str[i+1]);
                cout<<n<<m<<endl;
                counter++;
            }
        }
    }
    cout << counter;

    return 0;
}
