/*A set in STL is a container that stores unique (only one occurence)elements in a particular order. Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.*/

// stores in sorted order and unique
//  time complexcity is lograthmic time complexcity
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    s.insert("piyush");
    s.insert("palak");
    s.insert("dev");
    s.insert("maa");
    cout<<s.size();// return an iterator pointing to the first element in thg set



}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }
    cout << " set elements are";
    for (auto it = s.begin(); it != s.end(); it++)
        {
      cout << *it<<"  ";
    }
    cout << endl;
   
  s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
}

//one more term is used in this  the lower bound and upper bound