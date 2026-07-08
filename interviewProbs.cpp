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

class Complex{
    public:
    int real;
    int image;

    Complex(int r,int i){
        this->real=r;
        this->image=i;
    }
};


class Fraction{
    public:
    int num;
    int den;

    Fraction(int num,int den){
        this->num=num;
        this->den=den;
    }

    void display(){
        cout<<num<<"/"<<den;
    }
    
    Fraction operator+(Fraction f){
        int newNum=this->num*f.den+this->den*f.num;
        int newDen=f.den*this->den;
        return Fraction(newNum,newDen);
    }

};

// Function overloading vs overriding 
// Function overloading: same naam ka nmultiple functions but unke params different honge 

class Scooty{
    public:
    int topSpeed;
    float mileage;

     void sound(){
        cout<<"Vroom Vroom"<<endl;
    }

private:
    int bootSpace;


};

class Bike : public Scooty{
public:
    int gears;

       void sound(){
        cout<<"Dhrrom  Dhrrom"<<endl;
    }
};

class SuperBike : public Scooty{
public:

       void sound(){
        cout<<"Zroom  Zroom"<<endl;
    }
};
int main() {
    Fraction f1(1,3);
    Fraction f2(4,5);
    Fraction f3=f1+f2;


    Scooty *b =new Bike();
    b->sound();
    // Scooty ka pointer ma bhi hum parent class ko store krva skta hai 

    return 0;


}


// Compile Time Polymorphism :
// Run Time Polymorphism: 


// Compile Time Errors: Those errors that are syntactical in nature and occur at compile time like accessing a private attribute may 
// come under compile time 

// Run Time Errors: Divide by Zeros. Index goes out of bound

