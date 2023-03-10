#include<iostream>
using namespace std;

int array[4][3] = {

    {2,1,0},
    {0,0,0},
    {0,0,0},
    {2,1,0}
};
main()
{
    int count = 0; 

// if (array[0][0] == array[0][1] && array[0][1] == array[0][2] && array[0][2] == array[0][0] )
// {
//     count++;
// }
// if (array[1][0] == array[1][1] && array[1][1] == array[1][2] && array[1][2] == array[1][0])
// {
//    count++;
// }
// if (array[2][0] == array[2][1] && array[2][1] == array[2][2] && array[2][2] == array[2][0])
// {
//     count++;
// }
// if (array[3][0] == array[3][1] && array[3][1] == array[3][2] && array[3][2] == array[3][0])
// {
//     count++;
// }



for (int row = 0; row < 4; row++)
{
    for (int col = 0; col < 1; col++)
    {
        if (array[row][col] == array[row][col + 1] && array[row][col + 1] == array[row][col + 2] && array[row][col + 2] == array[row][col])
        {
            count++;
        }
        
    }
    
}
cout<<"NUMBER OF DUPLICATE ROWS ARE: "<<count;




}