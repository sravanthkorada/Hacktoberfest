//to initialize the properties of the class

#include <bits/stdc++.h>

using namespace std;

class human{
private:
    int age;
    string name;
public:
    human(){
        name = "noname";
        age = 0;
        cout << "Im been called bcz u created an object using this class name" << endl;
    }
    void display(){
        cout << age << " " << name << endl;
    }
};

int main(){
    human sravanth;
    sravanth.display();
    return 0;
}
