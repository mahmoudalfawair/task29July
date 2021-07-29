#include <iostream>
using namespace std;
int main()
{
//print O
/*
  * * * *
*         *
*         *
*         *
*         *     
  * * * *


*/
int col =0 ;
for(; col <6 ; col++)
{int row =0 ; 
for( ; row <6 ; row++)
{
cout << "* " ;
if(col == 0 && row ==0)
cout << "\b\b  ";
if(col ==0 && row == 5)
cout << "\b\b  ";
    if(col ==1 && row == 1)
cout << "\b\b  ";
    if(col ==1 && row == 2)
cout << "\b\b  ";
    if(col ==1 && row == 3)
cout << "\b\b  ";
    if(col ==1 && row == 4)
cout << "\b\b  ";


        if(col ==2 && row == 1)
cout << "\b\b  ";
        if(col ==2 && row == 2)
cout << "\b\b  ";
        if(col ==2 && row == 3)
cout << "\b\b  ";
        if(col ==2 && row == 4)
cout << "\b\b  ";

        if(col ==3 && row == 1)
cout << "\b\b  ";
        if(col ==3 && row == 2)
cout << "\b\b  ";
        if(col ==3 && row == 3)
cout << "\b\b  ";
        if(col ==3 && row == 4)
cout << "\b\b  ";

        if(col ==4 && row == 1)
cout << "\b\b  ";
        if(col ==4 && row == 2)
cout << "\b\b  ";
        if(col ==4 && row == 3)
cout << "\b\b  ";
        if(col ==4 && row == 4)
cout << "\b\b  ";

if(row ==0 && col ==5)
cout << "\b\b  ";
if(row ==5 && col ==5)
cout << "\b\b  ";


}

cout << endl;


}

return 29;
}