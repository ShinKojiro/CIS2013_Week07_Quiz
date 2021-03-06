#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    ifstream inStream;
    ofstream outStream;
    int charCount = 0, littleACount = 0, bigACount = 0, bigFCount = 0, littleBCount = 0;
    char next;

    inStream.open("info.dat");
    if(inStream.fail()){
        cout << "Failed to open file";
        exit(1);
    }

    while(!inStream.eof()){
        inStream.get(next);
        charCount++;
        switch(next){
            case 'A':
                bigACount++;
            break;
            case 'a':
                littleACount++;
            break;
            case 'F':
                bigFCount++;
            break;
            case 'b':
                littleBCount++;
            break;
            default:
                //charCount++;
            break;
        }
        // if(next == 'A'){
        //     bigACount++;
        // }
        // if(next == 'a'){
        //     littleACount++;
        // }
        // if(next == 'F'){
        //     bigFCount++;
        // }
        // if(next == 'b'){
        //     littleBCount++;
        // }
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
