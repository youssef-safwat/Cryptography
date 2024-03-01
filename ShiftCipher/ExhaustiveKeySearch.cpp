#include<iostream>
using namespace std;

// exhaustiveKeySearch function
// Search for meaningful plaintext string is obtained.
string exhaustiveKeySearch(const string&, char);

int main() {
    string chipertext;
    cout << "Please enter chipertext: "; 
    cin >> chipertext;

    // Try all keys from a to z
    for(char key = 'a'; key <= 'z'; ++key) {
        cout << key << ' ' << exhaustiveKeySearch(chipertext, key) << '\n';
    }
    return 0;
}

string exhaustiveKeySearch(const string& chipertext, char key) {
    // lower case string
    string lowerChipertext = chipertext;
    for(int i = 0; i < chipertext.size(); ++i) {
        lowerChipertext[i] = tolower(chipertext[i]);
    }
    // decryption using given key
    string plaintext;
    key = (key - 'a');
    for(auto c : lowerChipertext) {
        int value = ((c - 'a' - key));
        if(value < 0) value += 26;
        plaintext.push_back(char((value % 26) + 'a'));
    }
    return plaintext;
}
