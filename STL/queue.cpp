// defination -
/*A queue is a linear list of elements in which deletions can take place only at one end called the front, and insertions can take place only at the end called the rear. The queue is a First In First Out type of data structure (FIFO), the terms FRONT and REAR are used in describing a linear list only when it is implemented as a queue.
*/ // coode from striver
#include<bits/stdc++.h>
using namespace std;
void printq(queue<int>q1)
{
     queue<int> q2=q1;
    while(!q2.empty())
    {
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}
int main()
{ 
   queue<int> q;
    q.push(110);
    q.push(1);
    q.push(10);
    q.push(30);
    q.push(130);
    q.pop();
        printq(q);
        q.empty();
    // q.pop();
    // cout<<q.size();

    


 
    
}