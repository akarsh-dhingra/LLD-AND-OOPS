#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;
// First principles that clicked rbac can be accessed or done from oops 
// don't you think so it's not always about using apis and building some complex
// logic 
class Car{
    private:
    string ownerName;

    public:
    string color;
    string brand;
    int speed;

    Car(string color,string brand,int speed){
        this->color=color;
        this->brand=brand;
        this->speed=speed;
    }

    void start(){
        cout<<"Car has started"<<endl;
    }

    void increaseSpeed(int value){
        speed+=value;
    }
    void brake(){
        cout<<"Car's stopped"<<endl;
    }
};

int main() {
Car *c1=new Car("red","toyoyta",200);
c1->start();
cout<<c1->speed<<endl;

c1->increaseSpeed(12);
cout<<c1->speed;

    return 0;
}