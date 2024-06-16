#include <iostream>
using namespace std ;
int main (){
    int i = 3;
    cout << "i = " << i <<endl;
    
   int *ptr = &i ;
    /*cout <<"*ptr = " << *ptr <<endl; 
    cout << "ptr = " << ptr <<endl;
    cout <<"&ptr " << &ptr <<endl;
    cout <<"&*ptr "<<&*ptr <<endl;
    cout << sizeof(ptr );
    char ch = 's';
    char *p = &ch ; */
    cout << sizeof(ptr) <<endl; 

    // copying a pointer ;
    int *q = ptr ;
     cout << *q << endl;
     cout << q <<endl;
      
      *ptr = *ptr+1 ;
      cout << "updated * ptr "<< *ptr <<endl;
      ptr = ptr+1;
      cout <<" updated ptr "<< ptr <<endl;
    








    
}