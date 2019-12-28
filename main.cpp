#include <iostream>
#include <cstring>
#include <cstdio>
#include "lib.h"

using namespace std;

int main() {

    FILE* f = fopen("/Users/apple/CLionProjects/double_mass/looser","rw");  //Файловый дескриптор

    if (f == nullptr){
        cout<<"Не удалость открыть файл\n";
    }
    //fseek(f, , );

    //fread(char* buff[50], size, value_of_sizes, FILE* f);

    //fwrite(char* buff[50], size, value_of_sizes, FILE* f);

    //fputs("Hello", f);

    /*
     * В текстовом файле записано слово и нужно его перевернуть
     * Добавить функцию полендрома и проверить это слово на полендром
     */

    Double_mass();

    bool result = Palendrom();

    cout<<result;

    return 0;
}