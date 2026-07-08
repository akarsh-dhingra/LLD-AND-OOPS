#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

class Room {
    private:
    string roomName;
    public:
    Room(string roomName){
        this->roomName=roomName;
    }
    string getRoomName(){
        return roomName;
    }
};

class House{
    private:
    string houseName;
    vector<Room*>rooms;
    public:
    House(string hName){
        this->houseName=hName;
    }
    void addRoom(Room *room){
        rooms.push_back(room);
        
    }
};

int main() {
    fastio;
    
    int t; // number of test cases
    cin >> t;
    while (t--) {
        
        // Your code here
        
    }
    
    return 0;
}