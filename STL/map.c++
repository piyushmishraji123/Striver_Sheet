//map in STL are associative containers where each element consists of a key value and a mapped value. Two mapped values cannot have the same key value.
//map store unique keys and value pair in sorted pair
#include<bits/stdc++.h>
using namespace std;
int main()
{   map<string,int>M;//(key,value)

M["piyush"]=12;
M["palak"]=13;
M["kallo"]=34;

// M.insert({"sundar",12});
// M.insert({"hanthi",14});
// M.insert({"vivek",15});
// M.insert({"palak",16});
map<string,int> :: iterator itr;
for(auto itr =M.begin();itr != M.end();itr++)
{
 cout<<(*itr).first<<(*itr).second<<"\n";
}









    


}