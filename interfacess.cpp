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

class NotificationService{
    public:
    virtual void sendMessage(string user ,string message)=0;
};


class Email: public NotificationService{
    public:
    void sendMessage(string user,string msg)override{
        cout<<"Sending Email to"<<user<<":"<<msg<<endl;
    }
};
int main() {

    return 0;
}