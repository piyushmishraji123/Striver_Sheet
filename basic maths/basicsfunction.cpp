// function in c++
/*#include <iostream>
using namespace std;
void print()
{
    cout<<"jai shri ram ";
}
int main()
{
print();
print();
}
*/

// function with parameter
/*#include <iostream>
using namespace std;
void printName(string name)
{
cout<<"jai shri ram"<<name;
}
int main()
{
string name;
cin>>name;
printName(name);
}*/
// function pass by value
/*#include <iostream>
using namespace std;
void pass(int n)
{

    n = n + 120;
    cout << n << endl;
}
int main()
{
    int n = 10; // here the copy of the variable shared with the function
    pass(20);
    cout << n;
}*/
// pass by refrence
#include <iostream>
using namespace std;
void pass(int &n)
 {
    cout<<n<<endl;
    n = n + 120;
    cout << n << endl;
}
int main()
{
    int n = 10;
    pass(n);
    cout << n<<endl;// here the actual address of the variable is shared with function
}