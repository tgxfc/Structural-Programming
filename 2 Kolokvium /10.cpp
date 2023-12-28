// Input:
// Jas sum sreken

// Output:
// Saj mus sreken

#include <iostream>
#include <cstring>
using namespace std;

void Obraten(char *str, int start, int  end)
{
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void Proverka(char *str)
{
    int start=0;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int dolzina = i - start;

            if (dolzina % 2 != 0) {
                Obraten(str, start, i-1);
            }

            start = i + 1;
        }
    }
}

int main()
{
    char str[1000];
    cin.getline(str, 1000);

    Proverka(str);
    cout<<str;

    return 0;
}
