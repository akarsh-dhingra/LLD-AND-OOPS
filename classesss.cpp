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

class Bank {
    private:
    int totalBalance;
    // that means via inheritance we can ccreate some BankAccount 
    // class and keep on adding bankAccounts more and more everytime and new User comes
    // into our system
    // But every BankAccount creation will be somewhere done through this bankAccount class only
    // About inheritance logic is something we will discover as we go but high level you got What I 
    // am telling 
    public:
    Bank(){
        totalBalance=1000000;
    }
    void deposit(int value){
        totalBalance+=value;
    }
    void withDraw(int x){
        totalBalance-=x;
    }
};
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

/*
1. First principles that clicked rbac can be accessed or done from oops like give admin 
(Not sure {Explore about it}: That admin who first came can be give role attribute from enum as admin and 
rest of all the people will be users)
don't you think so it's not always about using apis and building some complex logic
2. Now Here I am explainint the concept of Modifiers in OOPS
A bank account has:

Account Number
Balance
Owner Name

Now ask yourself:

Should anyone be able to directly change the balance?
Obviously not.

Instead, users should only be allowed to perform operations like

account.deposit(500);
account.withdraw(200);

Now public means accessible from anywehere;
Anything declared as public can be used by any object.

Private

Meaning: Accessible only inside the same class.
Even objects of the class cannot directly access private members.
3. // Protected modifier
// Accessible inside the class.
// Accessible inside child (derived) classes.
// We will come to this in inheritance in more detail ->>>
*/