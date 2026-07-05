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

class BankAccount{
    private:
    string accountHolder;
    string IFSCnumber="IFSCBAB0ETQ";
    double balance;
    public:
    BankAccount(string accountHolder,double openingBalance){
        this->accountHolder=accountHolder;
        if(openingBalance>=0){
            this->balance=openingBalance;
        }
        else this->balance=0;
    }

    void deposit(double amount){
        if(amount>=0){
            balance=balance+amount;
            printf("Deposited: ",balance);
        }
        else {
            printf("Amount that is to be deposited must be positive");
        }
    }
    void withdraw(double amount){
        if(amount>=0 && balance>=amount){
            balance-=amount;
            printf("Withdrawn: ", amount);
        }
        else{
            printf("Withdraw amount cannot be negative");
        }
    }   
    double getBalance(){
        return balance;
    }
    string getAccountHolder(){
        return accountHolder;
    }
};

int main() {
    BankAccount *b1=new BankAccount("Akarsh",234);
    cout<<b1->IFSCnumber<<endl;
    
}