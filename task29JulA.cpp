#include<iostream>
using namespace std;
int main()
{
// print L 
int col = 0;
for(; col <5 ; col++)
{int row =0;
for(; row<5 ;row++ )
{
cout << "* " ;
if(row==0 && col ==0)
break;
if(row==0 && col ==1)
break;
if(row==0 && col ==2)
break;
if(row==0 && col ==3)
break;

}
cout << endl;
}

return 29;
}