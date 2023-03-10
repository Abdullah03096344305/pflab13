#include<iostream>

using namespace std;

int carsData [5][5] = { {10,7,12,10,4},
    {18,11,15,17,2},
    {23,19,12,16,0},
    {7,12,16,0,2},
    {3,5,6,2,1}};
int sum =0;
main()
{
    
    

    for(int row =0; row < 5;row++)
    {
        for (int col = 0; col < 5; col++)
        {
           // cout<<carsData[i][j] <<"\t";
            sum = sum + carsData[row][col];
            
        }
        // cout<<endl;
    }
    cout<<"total: "<<sum;
    // for (int i = 0; i < 5; i++)
    // {

    //    sum = sum + carsData[i][0];
    // }
    // cout<<"red cars: "<<sum;
    



}