#include<iostream>
using namespace std ;
class human {
    public :
    int height ;
    protected:
    int weight ;
    private :
    int age ;
    public :
    int getage(){
        return this -> age ;

    }
    int setweight(int w ){
        this->weight=w;

    }

};
class male : private human{
    public :
    string colour ;

    void sleep(){
        cout << "male sleeping "<<endl;
    }


};





int main (){
    male o1;
   // cout << o1.age <<endl;
    //cout << o1.weight <<endl;
   // cout << o1.height<<endl;
    //cout << o1.colour<<endl;
    o1.sleep();
    //o1.setweight(84);
    //cout <<o1.weight<<endl;
    human  o2;
    cout << o2.height <<endl;

}