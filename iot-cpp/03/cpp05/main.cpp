#include <cstring>
#include <iostream>

using namespace std;



class Human {
private:
    char name[20];
    int age;
    char job[20];
public:
    Human(char *aname, int aage, char *ajob) {
        strcpy(name, aname);
        strcpy(job, ajob);
        age = aage;
    }
    void PrintHuman() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Job: "<<job<<endl;
    }
};


int main() {

    Human h("hong",30, "assassin");
    h.PrintHuman();

    return 0;
}