    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {   list<int>ln={12,34,34,56};      list<int>l(1,22);
        l.push_back(1);
        l.emplace_front(12);
    list<int>l;// create a new container like a dynamic array 
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(12);//just similar to the insert in vector all the function are same as vector and here the push front has less time complexcity

    }

    // Some Basic Operations on std::list
    // front() – Returns the value of the first element in the list.
    // back() – Returns the value of the last element in the list.
    // push_front() – Adds a new element ‘g’ at the beginning of the list.
    // push_back() – Adds a new element ‘g’ at the end of the list.
    // pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
    // pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
    // insert() – Inserts new elements in the list before the element at a specified position.
    // size() – Returns the number of elements in the list.
    // begin() – begin() function returns an iterator pointing to the first element of the list.
    // end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.