#include<iostream>
using namespace std ;
class human {
    protected :
    int height ;

};
class male : protected human {
    public :
     void getheight(){
        cout <<height <<endl;

    }


     
    

};

int main (){
  
    male m1 ;
    //cout <<m1.height<<endl;


}