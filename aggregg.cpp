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

class Student {
public:
    string name;

    Student(string naam) {
        name = naam;
    }
};


class Teacher{
    private:
    string name;
    vector<Student*>students;
    public:
    Teacher(string naam)  {
        this->name=naam;
    }
    void addstudent(Student *s1){
        students.push_back(s1);
    }
    void showStudent(){
        // for (int x:arr)
        for(auto it: students){
            cout<<it->name<<endl;
        }
    }
};

// Ask yourself:
// Who owns the object?
// If the class merely uses another object without owning its lifetime, it's association.


/*
1. Important Note: If we are using v2 i.e. declaration using pointers similar to what we've done here 
then what we can do is then that is called aggregation. Teacher only references them.
This resembles aggregation/association because the teacher doesn't own the student objects.
For a school system,this is much more realistic.

2. V1 without using pointers i.e just doing Student s1("Akaarsh") this type of shit : If original student changesTeacher's copy doesn't.
This resembles composition because the Teacher contains its own copies of the Student objects.
*/

int main() {

    Teacher *t1= new Teacher("Ramlal");
    Student *s1=new Student("Aakrsh");
    t1->addstudent(new Student("Ramana"));
    t1->addstudent(s1);
    t1->showStudent();
}