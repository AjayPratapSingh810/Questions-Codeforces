#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, char> createMpR() {
    return {
        {'w', 'q'}, {'e', 'w'}, {'r', 'e'}, {'t', 'r'}, {'y', 't'},
        {'u', 'y'}, {'i', 'u'}, {'o', 'i'}, {'p', 'o'}, {'[', 'p'},
        {'s', 'a'}, {'d', 's'}, {'f', 'd'}, {'g', 'f'}, {'h', 'g'},
        {'j', 'h'}, {'k', 'j'}, {'l', 'k'}, {';', 'l'}, {'x', 'z'},
        {'c', 'x'}, {'v', 'c'}, {'b', 'v'}, {'n', 'b'}, {'m', 'n'},
        {',', 'm'}, {'.', ','}, {'/', '.'}, {']', '['}, {'\\', ']'},
        {'\'', ';'}, {'q', 'q'}, {'a', 'a'}, {'z', 'z'}  // Fixed duplicates
    };
}

unordered_map<char, char> createMpL() {
    return {
        {'q', 'w'}, {'w', 'e'}, {'e', 'r'}, {'r', 't'}, {'t', 'y'},
        {'y', 'u'}, {'u', 'i'}, {'i', 'o'}, {'o', 'p'}, {'p', '['},
        {'a', 's'}, {'s', 'd'}, {'d', 'f'}, {'f', 'g'}, {'g', 'h'},
        {'h', 'j'}, {'j', 'k'}, {'k', 'l'}, {'l', ';'}, {'z', 'x'},
        {'x', 'c'}, {'c', 'v'}, {'v', 'b'}, {'b', 'n'}, {'n', 'm'},
        {'m', ','}, {',', '.'}, {'.', '/'}, {'[', ']'}, {']', '\\'},
        {';', '\''}, {'\\', '\\'}, {'\'', '\''}, {'/', '/'}  // Fixed mappings
    };
}

string transformString(const unordered_map<char, char>& mapping, const string& s) {
    string result;
    for (char c : s) {
        result.push_back(mapping.at(c));
    }
    return result;
}

int main() {
    unordered_map<char, char> mpR = createMpR();
    unordered_map<char, char> mpL = createMpL();

    char mode;
    cin >> mode;

    string input;
    cin >> input;

    string output = (mode == 'L') ? transformString(mpL, input) : transformString(mpR, input);
    cout << output << endl;

    return 0;
}tt