//Inheritance= allows us to use functions defined in one class in another class
//A derived class can inherit properties and methods of base class

#include <bits/stdc++.h>

using namespace std;

class human{
public:
    int age;
    string name;
    void setage(int myage){
        age=myage;
    }
    void setname(string myname){
        name=myname;
    }
};

class alien: public human{
public:
    int id;
    void setid(int myid){
        id = myid;
    }
    void display(){
        cout << name << " " << age << " " << id << endl;
    }
};

int main(){
    alien sravanth;
    sravanth.setage(21);
    sravanth.setname("sravanth korada");
    sravanth.setid(1089);
    sravanth.display();
    return 0;
}
