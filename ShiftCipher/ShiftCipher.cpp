#include<iostream>
using namespace std;

// encryption function
// accept plain text of literal and key
// return encrypting text
string shift_encrypting(const string&, char);

// decryption function
// accept encrypted text
// return plain text
string shift_decrypting(const string&, char);



int main() {
    string plain_text;
    cout << "Enter plain text for encryption \"lower case\": ";
    cin >> plain_text;

    char key;
    cout << "Enter the key of encryption: ";
    cin >> key;

    cout << "The plain text after encrypting: " << shift_encrypting(plain_text, key) << '\n';
    cout << "encrypted text after decryption: " << shift_decrypting(shift_encrypting(plain_text, key), key) << '\n';

    return 0;
}

// Definition of shift_encrypting
string shift_encrypting(const string& plain_text, char key) {
    string cypher_text;
    // key ASCII start from 97 'lower case'
    key = (key - 'a');
    for(auto c : plain_text) {
        int value = ((c - 'a' + key) % 26);
        cypher_text.push_back(char(value + 'a'));
    }
    return cypher_text;
}

// Definition of shift_decrypting
string shift_decrypting(const string& encrypted_text, char key) {
    string plain_text;
    // key ASCII start from 97 'lower case'
    key = (key - 'a');
    for(auto c : encrypted_text) {
        int value = ((c - 'a' - key));
        if(value < 0) value += 26;
        plain_text.push_back(char((value % 26) + 'a'));
    }
    return plain_text;
}