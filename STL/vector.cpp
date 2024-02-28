//vector in stl
#include <bits/stdc++.h>
using namespace std;

 void aceessvector()
{
vector<int>v ={10,20,30};
    // v.push_back(1);
    // v.emplace_back(2);
    // v.emplace_back(3);
    vector<int>:: iterator it =v.begin();//this method point out to the current address of a vector
    // it++;

    cout<<*(it)<<" ";
    it = it+2;
    cout<<*(it)<<" ";
    
}
void basic()
{
vector<int>v;// create a new container like a dynamic array 
v.push_back(1);
v.emplace_back(2);
v.emplace_back(3);
v.pop_back();
cout<<v[1]<<" ";
}
int main()
{
 basic();
aceessvector();
}

 //another itearator in vector
 /*#include <bits/stdc++.h>
using namespace std;
int main()
{   vector<int>v ={10,20,30,40,50,60,70};
 
    vector<int>:: iterator it =v.end();//this method point out to the last memory location which is empty
    it--;
    cout<<*(it)<<" ";
    it = it-2;
    cout<<*(it)<<" ";
    


 }*/
 //another itreator in stl
 /*#include <bits/stdc++.h>
using namespace std;
int main()
{      
   vector<int> v;
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);
    
    cout << "The last element is: " << *v.rbegin();
     for (auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";
   
 }*/
 //function to print last member of a function
/* #include <bits/stdc++.h>
using namespace std;
int main()
{      
    vector<int>v ={10,20,10,33,49,24,23};
    cout<<v.back();//print the last element of a vector


}*/
// printing the vector through the iterrator and auto keyword
/*#include <bits/stdc++.h>
using namespace std;
int main()
{vector<int>v ={10,20,202,202,124,23423,234343};
    // for(vector<int>::iterator it = v.begin();it !=v.end();it++){
    //     cout<<*(it)<<" ";
    // }
       for( auto it = v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }
}*/
// vector printing throgh the for each loop 
/*#include <bits/stdc++.h>
using namespace std;
int main()
{vector<int>v ={10,20,202,202,124,23423,234343};
for(auto it:v){
    cout<<it<<" ";
}
}*/
//erasing  things from vector


/*#include <bits/stdc++.h>
using namespace std;
int main()
{vector<int>v ={10,20,202,202,124,23423,234343};
auto it= v.begin();
v.erase(it);//erase the first index of the vectoe
for(auto it:v){
    cout<<it<<" ";
}

}*/
//deleting multiple elements form a vector
/*#include <bits/stdc++.h>
using namespace std;
int main()
{   vector<int>v ={10,20,30,40,50,60,70};
    auto it= v.begin();
    v.erase(v.begin() + 1,v.begin() +  2);
    for(auto it :v)
    {
      cout<<it<<"  ";
    }
} */
//insert something in vector
/*#include <bits/stdc++.h>
using namespace std;
int main()
// {   vector<int>v(2,100);
{  vector<int>v={12,23,34,45,67};
  v.insert(v.begin(),300);
  v.insert(v.begin()+1,5500);
    v.insert(v.begin()+1,2,600);

   for(auto it :v)
    {
      cout<<it<<"  ";
    }
}*/
//copy in vector
/*#include <bits/stdc++.h>
using namespace std;
int main()
{ vector<int>piyush(5,8);
  vector<int>copy(2,3090);
 piyush.insert(piyush.begin(),copy.begin(),copy.end());
 for(auto it:piyush)
 {
 cout<<it<<" ";
 }
}*/


// vector program by striver ji
/*#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();

}*/