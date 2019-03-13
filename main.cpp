#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    ifstream inStream;
    ofstream outStream;
    int charCount = 0;
    int littleACount = 0;
    int bigACount = 0;
    int bigFCount = 0;
    int littleBCount = 0;
    char next;

    inStream.open("info.dat");
    if(inStream.fail()){
        cout << "Failed to open file";
        exit(1);
    }

    while(!inStream.eof()){
        inStream.get(next);
        charCount++;
        if(next == 'A'){
            bigACount++;
        }
        if(next == 'a'){
            littleACount++;
        }
        if(next == 'F'){
            bigFCount++;
        }
        if(next == 'b'){
            littleBCount++;
        }
    }
    
    cout << "Character counts in info.dat:" << endl;
    cout << "Total: " << charCount << endl;
    cout << "A's: " << bigACount << endl;
    cout << "a's: " << littleACount << endl;
    cout << "F's: " << bigFCount << endl;
    cout << "b's: " << littleBCount << endl;
    cout << "And that is all." << endl;

    inStream.close();

    return 0;
}
