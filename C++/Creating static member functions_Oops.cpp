//a static member fun is a fun or a member of a class with the static keyword

#include <bits/stdc++.h>

using namespace std;

class human{
public:
    static int cnt;
    human(){
        cnt++;
    }
    static void display(){
        cout << "counter" << " " << cnt << endl;
    }
};

int human::cnt=0;

int main(){
    cout << human::cnt << endl;
    human anil;
    human ahmed;
    human akash;
    human suman;
    anil.display();
    human::display();
    cout << human::cnt << endl;
    return 0;
}
