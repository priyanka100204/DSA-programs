#include<iostream>
//here we are using STL
#include <stack>
using namespace std ;
int main (){
    stack < int > s ;
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "before pop " <<s.top() <<endl;
    s.pop();
    cout << "after pop "<<s.top()<<endl;

    if (s.empty()){
        cout << "STACK IS EMPTY " <<endl ;

    }
    else {
        cout << "STACK IS NOT EMPTY "<<endl ;
    }

}

