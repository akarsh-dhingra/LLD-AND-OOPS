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

class car {
public:
string name;
public:
car(string naam){
    this->name=naam;
}
void display(){
    cout<<"\n Car class";
}
 
};

class fuelCar:virtual public car{
    public:
void display(){
cout<<"Fuel car";
}
void getName(){
    cout<<name<<endl;
}
};

class ElectricCar: virtual public car{
   public:
void display(){
cout<<"Electric car";
}
void getName(){
    cout<<name<<endl;
}
};

class HybridCar: virtual public fuelCar,virtual public ElectricCar{
   public:
void display(){
cout<<"Fuel car and Electric Car";
}

};


// For avoiding duplication of grandparent's members and attributes in the 
// final child class make sure to declear it virtual 
int main() {
    fastio;
    
    int t; // number of test cases
    cin >> t;
    while (t--) {
        
        // Your code here
        
    }
    
    return 0;
}