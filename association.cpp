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


class Teacher{
    public:
    string name;

    Teacher(string naam){
        this->name=naam;
    }

    void teach(){
        cout<<name<<"is teaching"<<endl;
    }
};

class Student {
public:
    string name;

    Student(string name) {
        this->name = name;
    }

    void attendClass(Teacher& teacher) {
        cout << name << " is attending " << teacher.name << "'s class.\n";
    }
};

int main() {
    Teacher t("Dr. Sharma");
    Student s("Aakarsh");

    s.attendClass(t);

    t.teach();

    return 0;
}