#include <iostream>
using namespace std;

int main (){
    string cars[5] = {"BMW", "AUDI", "MAZDA", "VOLVO", "MERCY"};

    for (int i =  0; i < 5; i++) {
        cout << i << "=" << cars[i] << "\n";
    }

    return 0;
}