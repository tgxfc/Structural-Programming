// Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви),
// како и елементите на матрицата со димензии M x N (цели броеви). Да се напише програма што ќе ги
// промени редиците на матрицата на следниот начин:
//
// Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
// Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
// Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int x, n, m, matrix[100][100];
    cin>>x>>n>>m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=0; j<m; j++)
        {
            sum+=matrix[i][j];
        }
        
        if(sum>x)
        {
            for(int j=0; j<m; j++)
            {
                matrix[i][j]=1;
            }
        }
        else if(sum<x)
        {
            for(int j=0; j<m; j++)
            {
                matrix[i][j]=-1;
            }
        }
        else if(sum==x)
        {
            for(int j=0; j<m; j++)
            {
                matrix[i][j]=0;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
