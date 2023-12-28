// Да се напише фунцкија letterFrequency(char *text, char letter) што за даден letter ќе испечати информации која е релативната фреквенција на појавување на таа буква 
// во текстуалната низа text (како мала и како голема буква). Текстот е ограничен на максимум 1000 карактери.

// Релативна фреквенција на буква се пресметува како количник од бројот на појавувања на таа буква и вкупниот број на букви во текстот.

#include <iostream>
#include <cstring>
using namespace std;

float letterFrequency(char *text, char letter)
{
    float countera=0, counterb=0;
    for(int i=0; i<strlen(text); i++)
    {
        if(tolower(text[i])==tolower(letter))
            countera++;
        if(isalpha(text[i]))
            counterb++;
    }
    return countera/counterb;
}

    int main()
    {
        char letter, text[1000];
        cin.getline(text, 1000);
        cin>>letter;

        cout<<letterFrequency(text, letter);

        return 0;
    }
