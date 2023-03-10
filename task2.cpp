#include<iostream>

using namespace std;
char array[5][5] = {
    {'.','.','.','*','*'},
     {'.','*','.','.','.'},
     {'.','*','.','.','.'},
     {'.','*','.','.','.'},
     {'.','.','*','*','.'}
};

string checkCollision(string word);
main()
{
string word;

cout<<"enter index such as A1,B2,C3";
cin>>word;
//cout<<index;

cout<<checkCollision(word);

}
// string check(int index)
// {
//     char row = index[0];
//     char col = index[0];

    
// }

string checkCollision(string word)
{
    char row = word[0];
    char col = word[1];

    int colindex  = int(col) - '0';
    int rowindex;

     if (row == 'A')
    {
      rowindex = 0;  
    }
    else if (row == 'B')
    {
       rowindex = 1;
    }
    else if (row == 'C')
    {
       rowindex = 2;
    }
    else if (row == 'D')
    {
       rowindex = 3;
    }
    else if (row == 'E')
    {
       rowindex = 4;
    }
    

    if (array[rowindex][colindex] == '.')
    {
       result "splash"; 
    }
    else if (array[rowindex][colindex] == '*')
    {
        result "boom";
    }


    return result;
    
    

    }