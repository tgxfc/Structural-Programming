//Input primer
//2
//Finki nema zgrada, a jas imam jajce na oko
//Level!
//Output
//Finki nema zgrada, a jas imam jajce na oko : 1
// No palindromic words in this array : 0



#include <iostream>
#include <cstring>
using namespace std;

bool Palindrom(char* str, int start, int end)
{
    while(start!=end)
    {
        if(str[start++]!=str[end--])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    char str[100];
    cin>>n;
    cin.ignore();

    for(int j=0; j<n; j++) {
        cin.getline(str, 100);
        int start=0, end=0, counter=0;
        for (int i = 0; str[i] != '\0';) {
            while (str[i] != '\0' && !isalpha(str[i])) {
                i++;
            }
            start = i;

            while (str[i] != '\0' && isalpha(str[i])) {
                i++;
            }
            end = i - 1;

            if (end != start) {
                if (Palindrom(str, start, end)) {
                    counter++;
                }
            }
        }
        if (counter > 0)
            cout << str << " : " << counter;
        else
            cout << "No palindromic words in this array : " << counter;
    }
    return 0;
}
