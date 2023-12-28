// Input: shdvxushayywvayymfoit
// Output: shdvxUshAyywvAyymfOIt

#include <iostream>
#include <cstring>
using namespace std;

    int main()
    {
        char str[1000];
        cin.getline(str, 1000);

        for(int i=0; i<strlen(str); i++)
        {
            if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u')
            {
                str[i]=toupper(str[i]);
            }
            else
                str[i]=tolower(str[i]);
        }

        cout<<str;

        return 0;
    }
