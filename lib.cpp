#include <iostream>
#include <string>

using namespace std;

void Double_mass() {

    char **pointer = new char *[3];

    for (int i = 0; i < 3; i++) {
        pointer[i] = new char[5];
        memcpy(pointer[i], "Hello", 5);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << pointer[i][j];
        }
        cout << endl;
    }
}

bool Palendrom() {

    bool lol=true;
    bool result = true;
    int endOfStr=0, i=0;
    char *str = new char[10];
    cin >> str;

    while (lol){
        if (str[i]!='\0'){
            endOfStr++;
        }else{
            lol=false;
        }
        i++;
    }

    endOfStr--;

    for (int i = 0; i < endOfStr; i++) {
            if ((str[i] == str[endOfStr-i] && result) || endOfStr==1) {
                result=true;
            } else {
                result = false;
            }
        }
    return result;
}