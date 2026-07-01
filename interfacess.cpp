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

// Similarly now we can implement every single notificationProvider that we're 
// going to onboard be it emal smm slack etc etc 
class Whatsapp: public NotificationService{
    public:
   void sendMessage(string user,string msg)override{
        cout<<"Sending Whatsappp to"<<user<<":"<<msg<<endl;
    }
};
// But here comes the OG or the elephant in the room 


int main() {

    return 0;
}