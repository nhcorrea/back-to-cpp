#include <iostream>
using namespace std;

int main(){
    string name2 = "Nathã";
    string name3 = "102839128309128309128312908401298421094821904812904812";


    cout << name2.length() << endl;

    int num1 = 10;
    int num2 = 20;

    string test1 = "10";
    string test2 = "20";
    string test3 = "10.86";
    string test4 = "10.05";
    int num3, num4;
    double num5, num6;

    try {
        num5 = stod(test3);
        num6 = stod(test4);

        num3 = stoi(test1);
        num4 = stoi(test2);

        num5 = stoi(name3);

        cout << (num1 + num2) << endl;
        cout << (test1 + test2) << endl;
        cout << (num3 + num4) << endl;
        cout << (num5 + num6) << endl;
    } catch (out_of_range& e){
        cout << "ERROR: " << e.what() << endl;
    }

    return 0;
}