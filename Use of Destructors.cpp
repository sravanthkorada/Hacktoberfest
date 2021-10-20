//use of destructors is to release resources

#include <bits/stdc++.h>

using namespace std;

class human{
private:
    string *name;
    int *age;
public:
    human(string myname, int myage){
        cout << "constructor called" << endl;
        name = new string;
        age = new int;
        *name = myname;
        *age = myage;
    }
    void display(){
        cout << *name << " " << *age << endl;
    }
    ~human(){
        cout << "all memories are released" << endl;
        delete name;
        delete age;
    }
};

int main(){
    human *sravanth = new human("sravanth korada", 21);
    sravanth->display();
    delete sravanth;
    return 0;
}
