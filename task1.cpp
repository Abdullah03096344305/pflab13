#include<iostream>
using namespace std;

int matrix[3][3] = {
    {1,0,0},
    {0,1,0},
    {0,0,1}};

    bool IsIdentity();


main()
{

// if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] && matrix[2][2] == matrix[1][1] )
// {
//    cout<<"true";
// }
// else
// cout<<"false";


}

bool IsIdentity()
{
    bool flag = true;
    for (int row = 0; row < 3; row++)
    {
        for (int col= 0; col < 3; col++)
        {
           if (row == col && matrix[row][col] != 1)
           {
            flag  = false ;
            break;
           }
           else if (row != col && matrix[row][col] != 0)
           {
             flag  = false ;
            break;
           }
           
           
        }
        
    }
    
}