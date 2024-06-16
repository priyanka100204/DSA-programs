#include <iostream>
using namespace std ;
class hero {
    public :
    int health ;
    char level ;

    hero ( ){
        cout << " constructor is called :"<<endl;

    }
    hero (int health ){
        this->health = health ;

    }
    hero (hero & temp){
        cout << "copy const called ";
        this->health =temp.health;
    }
   
    
    };
    int main (){
        hero suresh (70);
        hero r(suresh);
        cout <<r.health;
       
    }
