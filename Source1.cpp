#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream a;
    string t;
    a.open("Lec.txt", ios::in);
    while (!a.eof()) {
        getline(a, t);
        std::cout << "T: " + t << endl;
    }
    a.close();
}
