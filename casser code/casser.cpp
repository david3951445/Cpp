#include <iostream>
using namespace std;
#include <string.h>

int main() {
    char str[] = "Ao0Yke5H9C";
    for(int j = 0; j < 26; j++) {
        cout << str << endl;

        for(int i = 0; i < strlen(str); i++){
            if('A' <= str[i] && str[i] <= 'Y' || 'a' <= str[i] && str[i] <= 'y')
                str[i]++;
            else if (str[i] == 'Z' || str[i] == 'z')
                str[i] = str[i] - 25;
        }    
    }    
}