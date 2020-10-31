#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, k, sum=0, m1[3][3], m2[3][3], m3[3][3];
    cout << "Enter first matrix element: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
          {
            cin >> m1[i][j];
          }
    }
    cout << "Enter second matrix element: ";
    for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
          {
            cin >> m2[i][j];
          }
    }
    cout << "Multiplying the two matrix: ";
    for(i=0; i<3; i++ )
    {
        for(j=0; j<3; j++)
        {
            sum=0;
            for(k=0; k<3; k++)
            {
                sum = sum + m1[i][k] * m2[k][j];
            }
            m3[i][j] = sum;
        }
    }
    cout << "\nMultiplication of above two matrices is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout << m3[i][j] <<" ";
        }
        cout << "\n";
    }
    return 0;
    getch();
}  
