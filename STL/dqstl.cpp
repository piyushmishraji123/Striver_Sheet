#include <bits/stdc++.h>
using namespace std;
int main()
{  
deque<int>dq ={112,23,45,687};

dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(12);
// cout<<dq[1];
dq.back();
dq.front();
for(auto i:dq)
{
    cout<<i<<" ";
}
}
