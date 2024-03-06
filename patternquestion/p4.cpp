
// inverse star pattern or pyramid
#include<iostream>
using namespace std;
int main()
{int n=5 ;
for (int i = 0; i < n; i++)
{   //FOR SPCAES
    for(int j=0; j<i;j++)
    {
        cout<<" ";
    }
    //FOR STAR
     for(int j=0;j< 2*n -(2*i +1);j++){

            cout<<"*";
        }
    //FOR THE SPACEES AFTER THE STAR
    for(int j=0; j<i;j++)
    {
        cout<<" ";
    }
    cout<<endl;
}

}
/*
********* 0 0 9 0
*******  1 1 7 1
*****   2 2 5 2
***    3 3 3 3
*     4 4 1 4
* */
