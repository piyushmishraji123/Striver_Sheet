
/*#include <iostream>
using namespace  std;
int main()
{
  int n;
  cin>>n;
  int row=1;
  while (row<=n)
  { int col=1;
    while (col<=n)
    { char ch ='A'+row-1;
        cout<<ch;
        col++;
    }
    cout<<endl;
    row++;
  }
}*/
// another pattern of pattern
#include <iostream>
using namespace  std;
int main()
{
  int n;
  cin>>n;
  int row=1;
  while (row<=n)
  { int col=1;
    while (col<=n)
    { char ch ='A'+row-1;
        cout<<ch;
        col++;
    }
    cout<<endl;
    row++;
  }
}
// abc patern 
/*#include <iostream>
using namespace  std;
int main()
{int n;
 cin>>n;
 int i=1;
 while (i<=n)
 {
  int j=1; 
  while (j<=n)
  { char ch ='A'+ j-1;
    cout<<ch;

    j++;
  }
  cout<<endl;
  i++;
  
 }
}
//pattern with continuosly characer
/*#include <iostream>
using namespace  std;
int main()
{int n;
 cin>>n;
 int i=1;
 while (i<=n)
 {
  int j=1; 
  while (j<=n)
   
   { char count ='A';
    //  char ch ='A'+ j-1;
  
    cout<<'A';
    count=count+1;
    j++;
  }
  cout<<endl;
  i++;
  
 }
}*/
