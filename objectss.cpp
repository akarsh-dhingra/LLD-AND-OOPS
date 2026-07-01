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

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

class Car{
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
   

    Car *car1=new Car("Red","Toyoyta",222);
    Car *car2=new Car("Blue","SUV",234);
    Car *car3 = new Car("Tesla", "Black",235);
    
    return 0;
}