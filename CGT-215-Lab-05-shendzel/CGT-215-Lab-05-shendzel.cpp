// CGT-215-Lab-05-shendzel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

char cypher(char letter, vector<char> codeTable) { //Realized that you need another vector variable to decipher it

    //This is for the uppercase
    if (letter >= 65 && letter <= 90) {
        return codeTable[letter - 65];
    }
    else if (letter >= 97 && letter <= 122) {

        char upperLetter = letter - 32; //I realized that the offset between uppercase and lowercase is 32

        char cypherLetter = codeTable[upperLetter - 65];

        return cypherLetter + 32;
    }
    else {
        return letter;
    }
}

int main() {
    vector<char> codeTable = {
    'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E'
    };
    string text;

    cout << "Enter Code: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++){
        text[i] = cypher(text[i], codeTable);
    }
    cout << "You entered: " << text << endl;
    return 0;

}
