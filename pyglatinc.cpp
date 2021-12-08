#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string input;
    vector<string> words;

    cout << "Enter the word or string to convert: ";
    getline(cin, input);

    cout << endl;

    while(input.find(' ') != string::npos) {
        words.push_back(input.substr(0, input.find(' ')));
        input = input.substr(input.find(' ') + 1);
    }
    words.push_back(input);

    //Translate the words
    for(string i : words) {
        i.append(string(1, tolower(i[0])) + "ay");
        i.erase(i.begin());

        //Print the translated word/sentence
        i[0] = toupper(i[0]);
        cout << i << " ";
    }

    return 0;
}
