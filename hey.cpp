#include <iostream>
using namespace std ;
int main (){
    int amount ;
    cin >> amount ;
    int Note ;
    cin >> Note  ;
    int n1=amount/100 ;
    int n2=(amount-n1*100)/50;
    int n3=amount-n1*100-n2*50 ;
    switch ( Note ){
        case 100 :cout<< "total number of note of  100 are --->"<<" " << amount/100 << endl;
        //break ;

        case 50 : cout << "total number of note of 50 are "<<" " <<(amount - n1*100)/50 << endl;
        //break ;

        case 20 : cout << "total number of note of 20 are " <<" " <<(amount-n1*100-n2*50)/20 << endl;
        //break ;


        case 1 :cout<< "total number of note of 1 are "<<" " << n3 << endl;
        return 0 ;


    }
    





    return 0 ;
}