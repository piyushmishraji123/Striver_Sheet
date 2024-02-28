//A stack is a non-primitive linear data structure. it is an ordered list in which the addition of a new data item and deletion of the already existing data item is done from only one end known as the top of the stack (TOS). The element which is added in last will be first to be removed and the element which is inserted first will be removed in last. As all the deletion and insertion in a stack are done from the top of the stack, the last added element will be the first to be removed from the stack. That is the reason why stack is also called Last-in-First-out (LIFO).

/*#include <bits/stdc++.h>
using namespace std;


    
int main()
{ stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);  
    st.push(8);
    st.emplace(5);// to insert an element in the stack.
    st.pop();// deletes the last element of the stack.
    cout<<st.top();// returns the element at the top of the stack.
    cout<<st.size();//returns the number of elements on the stack.
    st.empty();//  to check if the stack is empty or not.


}*/  
// code from striver sheet
/*#include<bits/stdc++.h>
using namespace std;
void printstack(stack<int> s1)
{
    stack<int> s2=s1;
    while(!s2.empty())
    {
        cout<<s2.top()<<"\n";
        s2.pop();
    }
}
int main()
{
    stack<int> s;
    for(int i=1;i<=5;i++)
    s.push(i);
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    printstack(s);
}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{   stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // cout<<s.size();
    // cout<<s.top(); 
    stack<int>s1;
    s1.swap(s);
    cout<<s1.top();
//  time comlexicityO(1)

    
}