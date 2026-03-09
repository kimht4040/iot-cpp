#include <iostream>
using namespace std;
class member{
    public:
    static int player;
    member() {
        player++;
    }

};
int member::player=0;

int main() {

    member m, m2, m3;

    cout << m.player << endl;




    return 0;
}