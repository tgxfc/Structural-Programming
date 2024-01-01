// Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #. 
// Да се напише програма во која од за секој прочитан ред ќе се отпечати бројот на цифри во тој ред, знакот :, 
// па самите цифри подредени според ASCII кодот во растечки редослед. Низите од знаци не се подолги од 100 знаци.

#include <iostream>
#include <cstring>
using namespace std;

int CounterCifri(char* str)
{
    int counter=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            counter++;
        }
    }

    return counter;
}

void ProverkaCifri(const char* str, int cifri[],int& j)
{
    for(int i=0; i<strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            cifri[j++]=str[i]-'0';
        }
    }
}

void SortiranjeCifri(int cifri[], int j)
{
    for(int i=0; i<j; i++)
    {
        for (int k = 0; k < j - i - 1; k++)
        {
            if (cifri[k] > cifri[k + 1])
            {
                swap(cifri[k], cifri[k + 1]);
            }
        }
    }
}

int main()
{
    char str[100];

    while(cin.getline(str, 100))
    {
        if (str[0] == '#')
        {
            break;
        }
        int cifri[100], j=0;

        int counter=CounterCifri(str);
        ProverkaCifri(str, cifri, j);
        SortiranjeCifri(cifri,j);

        cout<<counter<<":";
        for(int i=0; i<j; i++)
            cout<<cifri[i];
        cout<<endl;
    }

    return 0;
}
