#include <iostream>

using namespace std;

int main(){
    double score[] = {10, 8, 9.5, 7};
    double media = 0.0;


    int sizeOfArray = sizeof(score) / sizeof(double);

    for(int i = 0; i < sizeOfArray; i++){
        media += score[i];
        cout << media / sizeOfArray << endl;
    }

    cout << "sizeOfArray: " << sizeOfArray << endl;

    return 0;
}