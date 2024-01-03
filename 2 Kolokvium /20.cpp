// Од стандарден влез се читаат елементите на една матрица (A), составена од цели броеви. Прво се читаат бројот на редици N 
// и бројот на колони M на матрицата (N, M < 120), а потоа и самите елементи на матрицата.
//
// Да се испечати колку индексни броеви има во секоја колона поединечно.
//
// Индексен број е број чија вредност е идентична со вредноста што се добива со спојување на индексот од редицата и колоната на елементот.

#include <iostream>
using namespace std;

int main()
{
    int n, m, matrix[120][120];
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int j=0; j<m; j++)
    {
        int counter=0;
        for(int i=0; i<n; i++)
        {
            if(j<10)
            {
                if(matrix[i][j]==(i*10+j))
                counter++;
            }
            else if(j<100) //EPTEN PARTIZANSKO RESNIE
            {
                if(matrix[i][j]==(i*100+j))
                counter++;
            }
            else
            {
                if(matrix[i][j]==(i*1000+j))
                counter++;
            }
        }
        cout<<counter<<endl;
    }
    
    return 0;
}
