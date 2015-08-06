#include <iostream>
#include <string>
#include <array>
#include <unordered_set>
using namespace std;

int main(int argc, char **argv)
{

    unordered_set<string> myset = {"yellow", "green", "blue"};

    cout << "myset contains:";
    for(const string & x : myset){
        cout << " " << x;

    }

    cout << endl;

    return 0;
}





