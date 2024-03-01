#include<iostream>
using namespace std;

// Let \\pi set a the following permutation
const string KEY = "xnyahpogzqwbtsflrcvmuekjdi";

// chipertext finction
// Accept plain text
// Return ciphertext after encyption
string chipertext(const string&);

int main() {
    string plaintext;
    cout << "Please enter plaintext: ";
    cin >> plaintext;

    cout << "Chipertext: " << chipertext(plaintext) << '\n';
}

// Define chipertext function
string chipertext(const string& plaintext) {
    // In the case he give me upper case character
    string lowerPlaintext = plaintext;
    for(int i = 0; i < lowerPlaintext.size(); ++i) {
        lowerPlaintext[i] = tolower(plaintext[i]);
    }
    string c;
    for(int i = 0; i < lowerPlaintext.size(); ++i) {
        c.push_back(KEY[lowerPlaintext[i] - 'a']);
    }
    return c;
}