// Од стандарден влез се читаат непознат број на редови додека не се прочита 0. Да се најде најдолгиот ред во кој има барем 2 цифри. 
// Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. 
// Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред не е подолг од 100 знаци.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100], maxstr[100];
    int pocetok=0, kraj=0, max=0, maxpocetok=0, maxkraj=0;

    while(cin.getline(str, 100)) 
    {
        bool prvacifra=false, poslednacifra=false;
        if (str[0] == '0')
        {
            break;
        }
        
        for (int i = 0; i < strlen(str); i++)
        {
            if (isdigit(str[i]))
            {
                pocetok = i;
                prvacifra=true;
                break;
            }
        }

        for (int i = pocetok+1; i < strlen(str); i++)
        {
            if (isdigit(str[i]))
            {
                kraj = i;
                poslednacifra=true;
            }
        }
        
        if((max<=strlen(str)) && prvacifra && poslednacifra)
        {
            maxpocetok=pocetok;
            maxkraj=kraj;
            max=strlen(str);
            strncpy(maxstr, str, strlen(str));
        }
    }

    for (int i = maxpocetok; i <= maxkraj; i++)
    {
        cout<<maxstr[i];
    }
    
    return 0;
}
