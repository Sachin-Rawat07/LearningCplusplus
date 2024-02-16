#include <iostream>
using namespace std;

class Hero{

    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }
    void setLevel( char ch){
        level=ch;
    }

};


int main(){
    Hero ramesh;
    cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
    //ramesh.health=40;
    ramesh.setHealth(70);
    cout<<"Health is "<<ramesh.getHealth()<<endl;
    cout<<"level is "<<ramesh.level<<endl;

return 0 ;
}